#!/bin/sh

make > /dev/null		\
	&& echo make ok! 	\
	|| exit 1



set -v
./aa -1
valgrind -q ./aa
valgrind -q ./aa 0
valgrind -q ./aa 2
