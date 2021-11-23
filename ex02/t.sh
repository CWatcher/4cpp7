#!/bin/sh

make > /dev/null		\
	&& echo make ok! 	\
	|| exit 1

set -v

./aa -1
./aa
./aa 0
./aa 10
