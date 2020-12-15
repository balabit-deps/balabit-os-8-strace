#!/bin/sh
#
# Check decoding of ipc syscalls
#
# Copyright (c) 2015-2018 The strace developers.
# All rights reserved.
#
# SPDX-License-Identifier: GPL-2.0-or-later

. "${srcdir=.}/init.sh"

run_prog > /dev/null
run_strace -eipc "$@" $args > "$EXP"
match_grep "$LOG" "$EXP"

exit 0
