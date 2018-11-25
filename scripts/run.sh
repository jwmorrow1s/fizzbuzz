#!/bin/bash
MAIN='src/main.c'
TEST='tests/main.c'
FIZZBUZZ='impls/fizzbuzz.c'

gcc -o test1 $TEST $FIZZBUZZ -I modules
./test1

if [ $? -lt 1 ]
then
  gcc -o app $MAIN $FIZZBUZZ -I modules
  ./app $1
  rm app && rm test1
  echo "Completed Successfully!"
else
  rm test1
  echo "Run Failure"
fi
