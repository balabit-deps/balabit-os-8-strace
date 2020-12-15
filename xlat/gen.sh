#!/bin/sh -efu
#
# Copyright (c) 2014-2015 Mike Frysinger <vapier@gentoo.org>
# Copyright (c) 2014-2015 Dmitry V. Levin <ldv@altlinux.org>
# Copyright (c) 2014-2019 The strace developers.
# All rights reserved.
#
# SPDX-License-Identifier: LGPL-2.1-or-later

export LC_ALL=C

usage()
{
	cat <<EOF
Usage: $0 <input> <output>

Generate xlat header files from <input> (a file or dir of files) and write
the generated headers to <output>.
EOF
	exit 1
}

cond_def()
{
	local line
	line="$1"; shift

	local val
	val="${line%%[!A-Za-z0-9_]*}"

	local t def=
	t="${line#*[	 ]}"
	if [ "$line" != "$t" ]; then
		while [ "$def" != "$t" ]; do
			def="$t"
			t="${t##[	 ]}"
		done
	fi

	if [ -n "$def" ]; then
		printf "%s\n" \
			"#if defined($val) || (defined(HAVE_DECL_$val) && HAVE_DECL_$val)" \
			"DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE" \
			"static_assert(($val) == ($def), \"$val != $def\");" \
			"DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE" \
			"#else" \
			"# define $val $def" \
			"#endif"
	fi
}

print_xlat()
{
	local val
	val="$1"; shift

	[ 1 = "$value_indexed" ] && printf " [%s] =" "${val}"
	if [ -z "${val_type-}" ]; then
		echo " XLAT(${val}),"
	else
		echo " XLAT_TYPE(${val_type}, ${val}),"
	fi
}

print_xlat_pair()
{
	local val str
	val="$1"; shift
	str="$1"; shift

	[ 1 = "$value_indexed" ] && printf " [%s] =" "${val}"
	if [ -z "${val_type-}" ]; then
		echo " XLAT_PAIR(${val}, \"${str}\"),"
	else
		echo " XLAT_TYPE_PAIR(${val_type}, ${val}, \"${str}\"),"
	fi
}

cond_xlat()
{
	echo "$1" | {
		local val def m xlat

		read val def

		m="${val%%|*}"

		if [ "${m}" = "${m#1<<}" ]; then
			xlat="$(print_xlat "${val}")"
		else
			xlat="$(print_xlat_pair "1ULL<<${val#1<<}" "${val}")"
			m="${m#1<<}"
		fi

		if [ -z "${def}" ]; then
			printf "%s\n" \
				"#if defined(${m}) || (defined(HAVE_DECL_${m}) && HAVE_DECL_${m})" \
				" ${xlat}" \
				"#endif"
		else
			echo "$xlat"
		fi
	}
}

gen_header()
{
	local input="$1" output="$2" name="$3"
	echo "generating ${output}"
	(
	local defs="${0%/*}/../defs.h"
	local mpers="${0%/*}/../mpers_xlat.h"
	local decl="extern const struct xlat ${name}[];"
	local in_defs= in_mpers=
	local xlat_type="XT_NORMAL"

	value_indexed=0

	if grep -F -q -x "$decl" "$defs"; then
		in_defs=1
	elif grep -F -q -x "$decl" "$mpers"; then
		in_mpers=1
	fi

	cat <<-EOF
	/* Generated by $0 from $1; do not edit. */

	#include "gcc_compat.h"
	#include "static_assert.h"

	EOF

	local unconditional= line
	# 1st pass: output directives.
	while read line; do
		case "$line" in
			*/\**)
			line=$(printf "%s" "$line" |
				sed "s|[[:space:]]*/\*.*\*/[[:space:]]*||")
			;;
		esac

		case $line in
		'#conditional')
			unconditional=
			;;
		'#unconditional')
			unconditional=1
			;;
		'#val_type '*)
			# to be processed during 2nd pass
			;;
		'#sorted'|'#sorted '*)
			xlat_type="XT_SORTED"
			;;
		'#value_indexed')
			value_indexed=1
			xlat_type="XT_INDEXED"
			;;
		'#'*)
			echo "${line}"
			;;
		[A-Z_]*)
			[ -n "$unconditional" ] ||
				cond_def "$line"
			;;
		esac
	done < "$input"

	cat <<-EOF

		#ifndef XLAT_MACROS_ONLY

	EOF

	if [ -n "$in_defs" ]; then
		cat <<-EOF
			# ifndef IN_MPERS

		EOF
	elif [ -n "$in_mpers" ]; then
		cat <<-EOF
			# ifdef IN_MPERS

			${decl}

			# else

		EOF
	else
		cat <<-EOF
			# ifdef IN_MPERS

			#  error static const struct xlat ${name} in mpers mode

			# else

		EOF
	fi

	echo "static const struct xlat_data ${name}_xdata[] = {"

	unconditional= val_type=
	# 2nd pass: output everything.
	while read line; do
		case "$line" in
			*/\**)
			line=$(printf "%s" "$line" |
				sed "s|[[:space:]]*/\*.*\*/[[:space:]]*||")
			;;
		esac

		case ${line} in
		'#conditional')
			unconditional=
			;;
		'#unconditional')
			unconditional=1
			;;
		'#sorted'|'#sorted '*)
			;;
		'#value_indexed')
			;;
		'#val_type '*)
			val_type="${line#\#val_type }"
			;;
		[A-Z_]*)	# symbolic constants
			if [ -n "${unconditional}" ]; then
				print_xlat "${line}"
			else
				cond_xlat "${line}"
			fi
			;;
		'1<<'[A-Z_]*)	# symbolic constants with shift
			if [ -n "${unconditional}" ]; then
				print_xlat_pair "1ULL<<${line#1<<}" "${line}"
			else
				cond_xlat "${line}"
			fi
			;;
		[0-9]*)	# numeric constants
			print_xlat "${line}"
			;;
		*)	# verbatim lines
			echo "${line}"
			;;
		esac
	done < "${input}"
	echo '};'

	if [ -n "$in_defs" ]; then
		:
	elif [ -n "$in_mpers" ]; then
		cat <<-EOF
			#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
			static
			#  endif
		EOF
	else
		cat <<-EOF
			static
		EOF
	fi

	cat <<-EOF
		const struct xlat ${name}[1] = { {
			 .data = ${name}_xdata,
			 .size = ARRAY_SIZE(${name}_xdata),
			 .type = ${xlat_type},
		} };

		# endif /* !IN_MPERS */

		#endif /* !XLAT_MACROS_ONLY */
	EOF
	) >"${output}"
}

gen_make()
{
	local output="$1"
	local name
	shift
	echo "generating ${output}"
	(
		printf "XLAT_INPUT_FILES = "
		printf 'xlat/%s.in ' "$@"
		echo
		printf "XLAT_HEADER_FILES = "
		printf 'xlat/%s.h ' "$@"
		echo
		for name; do
			printf '$(top_srcdir)/xlat/%s.h: $(top_srcdir)/xlat/%s.in $(top_srcdir)/xlat/gen.sh\n' \
				"${name}" "${name}"
			echo '	$(AM_V_GEN)$(top_srcdir)/xlat/gen.sh $< $@'
		done
	) >"${output}"
}

gen_git()
{
	local output="$1"
	shift
	echo "generating ${output}"
	(
		printf '/%s\n' .gitignore Makemodule.am
		printf '/%s.h\n' "$@"
	) >"${output}"
}

main()
{
	case $# in
	0) set -- "${0%/*}" "${0%/*}" ;;
	2) ;;
	*) usage ;;
	esac

	local input="$1"
	local output="$2"
	local name
	local jobs=0
	local ncpus="$(getconf _NPROCESSORS_ONLN)"
	local pids=
	[ "${ncpus}" -ge 1 ] ||
		ncpus=1

	if [ -d "${input}" ]; then
		local f names=
		set +f
		set -- "${input}"/*.in
		set -f
		for f; do
			[ -f "${f}" ] || continue
			name=${f##*/}
			name=${name%.in}
			gen_header "${f}" "${output}/${name}.h" "${name}" &
			pids="$pids $!"
			names="${names} ${name}"
			: $(( jobs += 1 ))
			if [ "${jobs}" -gt "$(( ncpus * 2 ))" ]; then
				read wait_pid rest
				pids="$rest"
				wait -n 2>/dev/null || wait "$wait_pid"
				: $(( jobs -= 1 ))
			fi <<- EOF
			$pids
			EOF
		done
		gen_git "${output}/.gitignore" ${names} &
		gen_make "${output}/Makemodule.am" ${names} &
		wait
	else
		name=${input##*/}
		name=${name%.in}
		gen_header "${input}" "${output}" "${name}"
	fi
}

main "$@"
