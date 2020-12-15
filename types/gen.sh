#!/bin/sh -efu
#
# Copyright (c) 2014-2015 Mike Frysinger <vapier@gentoo.org>
# Copyright (c) 2014-2015 Dmitry V. Levin <ldv@altlinux.org>
# Copyright (c) 2014-2020 The strace developers.
# All rights reserved.
#
# SPDX-License-Identifier: LGPL-2.1-or-later

[ "x${D:-0}" != x1 ] || set -x

export LC_ALL=C

usage()
{
	cat <<EOF
Usage: $0 <input-header> <output-c> <output-m4>

Generate .c and .m4 files from <input-header> (a file or dir of files)
and write the generated files to <output-c> and <output-m4>.
EOF
	exit 1
}

gen_c_check()
{
	local input output
	input="$1"; shift
	output="$1"; shift

	local type_fields
	type_fields="$(gawk -f "${0%/*}/find_last_type_fields.awk" "$input")"
	[ -n "$type_fields" ] || {
		echo >&2 "$input: no types found"
		return 1
	}

	echo "generating $output"
	{
		cat <<-EOF
			/* Generated by $0 from $input; do not edit. */
			#include "defs.h"
			#include "static_assert.h"
			#include "types/${input##*/}"
		EOF
		local type_field type field TYPE FIELD
		for type_field in $type_fields; do
			type="${type_field%%.*}"
			field="${type_field#*.}"
			TYPE="$(printf %s "$type" |tr '[:lower:] ' '[:upper:]_')"
			FIELD="$(printf %s "$field" |tr '[:lower:].' '[:upper:]_')"

			cat <<-EOF

				#ifdef HAVE_STRUCT_$TYPE
				# ifdef HAVE_STRUCT_${TYPE}_$FIELD
				static_assert(sizeof(struct $type) == sizeof(struct_$type),
				      "struct $type size mismatch, please update the decoder or fix the kernel");
				# else
				static_assert(sizeof(struct $type) <= offsetof(struct_$type, $field),
					"struct $type size mismatch, please update the decoder or fix the kernel");
				# endif /* HAVE_STRUCT_${TYPE}_$FIELD */
				#endif /* HAVE_STRUCT_$TYPE */
			EOF
		done
	} > "$output"
}

gen_m4_check()
{
	local input output macro
	input="$1"; shift
	output="$1"; shift
	macro="$1"; shift

	local type_fields
	type_fields="$(gawk -f "${0%/*}/find_last_type_fields.awk" "$input")"
	[ -n "$type_fields" ] || {
		echo >&2 "$input: no types found"
		return 1
	}

	local header
	header="$(sed -n 's/^#[[:space:]]*include[[:space:]]\+<\([^>]\+\)>.*/\1/p' "$input" |
		tail -1)"
	[ -n "$header" ] || {
		echo >&2 "$input: no included headers found"
		return 1
	}

	local inc_expr1 inc_expr2 includes
	inc_expr1='s/^#[[:space:]]*include[[:space:]]\+\(<[^>]\+>\).*/#include \1/p'
	inc_expr2='s/^#[[:space:]]*include[[:space:]]\+"\([^"]\+\)".*/#include "\$srcdir\/\1"/p'
	includes="$(sed -n "$inc_expr1; $inc_expr2" "$input")"

	echo "generating $output"
	{
		cat <<-EOF
			dnl Generated by $0 from $input; do not edit.
			AC_DEFUN([$macro],[
			AC_CHECK_HEADERS([$header],[
		EOF
		local type_field type field
		for type_field in $type_fields; do
			type="${type_field%%.*}"
			field="${type_field#*.}"
			cat <<-EOF

				AC_CHECK_TYPES([struct $type],
				[AC_CHECK_MEMBERS([struct $type.$field],,,[AC_INCLUDES_DEFAULT
				$includes])],,[AC_INCLUDES_DEFAULT
				$includes])
			EOF
		done
		echo '])])'
	} > "$output"
}

gen_m4_entry()
{
	local output
	output="$1"; shift
	echo "generating $output"
	{
		printf 'AC_DEFUN([st_CHECK_TYPES],[\n'
		printf '\t%s\n' "$@"
		printf '])\n'
	} >"$output"
}

gen_gitignore()
{
	local output
	output="$1"; shift
	echo "generating $output"
	{
		printf '/%s\n' .gitignore Makemodule.am st_check_types.m4
		printf '/check-%s.c\n' "$@"
		printf '/check-%s.m4\n' "$@"
	} >"$output"
}

gen_makefile()
{
	local output
	output="$1"; shift
	echo "generating $output"
	{
		printf 'TYPES_HEADER_FILES = '
		[ $# -eq 0 ] ||
			printf 'types/%s.h ' "$@"
		echo
		printf 'TYPES_CHECK_FILES = '
		[ $# -eq 0 ] ||
			printf 'types/check-%s.c ' "$@"
		echo
		printf 'TYPES_M4_FILES = '
		[ $# -eq 0 ] ||
			printf 'types/check-%s.m4 ' "$@"
		echo
	} >"$output"
}

process_all()
{
	local dir
	dir="${0%/*}"

	set +f
	set -- "$dir"/*.h
	set -f

	local f
	local names= macros=
	for f; do
		[ -f "$f" ] || continue
		local name macro
		name=${f##*/}
		name=${name%.h}
		macro="st_CHECK_TYPES_$(printf %s "$name" |tr '[:lower:].' '[:upper:]_')"
		gen_c_check "$f" "$dir/check-$name.c"
		gen_m4_check "$f" "$dir/check-$name.m4" "$macro"
		names="$names $name"
		macros="$macros $macro"
	done
	gen_m4_entry "$dir/st_check_types.m4" $macros
	gen_gitignore "$dir/.gitignore" $names
	gen_makefile "$dir/Makemodule.am" $names
}

process_one()
{
	local input output_c output_m4 name macro
	input="$1"; shift
	output_c="$1"; shift
	output_m4="$1"; shift

	name=${input##*/}
	name=${name%.h}
	macro="st_CHECK_TYPES_$(printf %s "$name" |tr '[:lower:].' '[:upper:]_')"
	gen_c_check "$input" "$output_c"
	gen_m4_check "$input" "$output_m4" "$macro"
}

case $# in
	0) process_all ;;
	3) process_one "$@" ;;
	*) usage ;;
esac
