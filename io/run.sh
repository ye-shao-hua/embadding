#!/bin/bash
mkdir $1
cd $1
touch main.c
echo -e "all:\n\tgcc main.c\n\tclear\n\t./a.out\n\trm -f a.out">>makefile
