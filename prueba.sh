#!/bin/bash
for ((c =1;c < 500;c++))
do
	ARG=$(seq -1000 1000 | sort -R | tail -n 500 | tr '\n' ' ');
	gcc *.c
	echo -n "----$c----> "
	./a.out "$ARG" | wc -l
	./a.out "$ARG" | ./checker_Mac "$ARG"
done
