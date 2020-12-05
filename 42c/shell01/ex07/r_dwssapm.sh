#!/bin/sh

awk -F":" 'NR % 2 == 0 {print $1}' /etc/passwd | rev | sort -r | sed -n '${FT_LINE1},${FT_LINE2}p' | sed ':a;N;s/\n/, /g;ta' | tr '\n' \.