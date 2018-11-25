#include<stdlib.h>
#include<stdio.h>
#include"fizzbuzz.h"

int main(int argc, char** argv){
  if(argc < 2){
    printf("Usage: make run n=${your_number}\n");
    printf("Because no argument was provided, 100 is assumed for n.\n\n\n");
  }
  int n = (argv[1]) ? atoi(argv[1]) : 100;
  fizz_t* fizz_array = fizzbuzz_fr(n);
  print_fizz(fizz_array, n);
  free(fizz_array);
}
