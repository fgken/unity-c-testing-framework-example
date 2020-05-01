#!/bin/sh

dir=build
mkdir -p ${dir}/test_runners
mkdir -p ${dir}/bin

for path in $(ls test/tests/test_*.c)
do
  file=$(basename ${path})
  runner=${dir}/test_runners/runner_${file}
  ruby external/Unity/auto/generate_test_runner.rb ${path} ${runner}
  gcc -I src -I external/Unity/src external/Unity/src/unity.c ${runner} ${path} src/${file#test_} -o ${dir}/bin/${file%.c}
done
