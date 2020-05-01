#!/bin/sh

dir=build
mkdir -p ${dir}/bin
gcc src/main.c src/summodule.c src/mulmodule.c -o ${dir}/bin/prog
