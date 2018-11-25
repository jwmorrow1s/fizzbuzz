#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include"fizzbuzz.h"

bool test_fizz(fizz_t* actual);

int main(void){
  int n = 15;
  bool passed;
  fizz_t* fizz_array = fizzbuzz_fr(n);
  passed = test_fizz(fizz_array);
  free(fizz_array);

  if(!passed){
    return 1;
  }

  return 0;
}

bool test_fizz(fizz_t* actual){
  size_t size = 15;
  fizz_t* expected;
  strncpy(expected[0].val, "1", 8);
  strncpy(expected[1].val, "2", 8);
  strncpy(expected[2].val, "fizz", 8);
  strncpy(expected[3].val, "4", 8);
  strncpy(expected[4].val, "buzz", 8);
  strncpy(expected[5].val, "fizz", 8);
  strncpy(expected[6].val, "7", 8);
  strncpy(expected[7].val, "8", 8);
  strncpy(expected[8].val, "fizz", 8);
  strncpy(expected[9].val, "buzz", 8);
  strncpy(expected[10].val, "11", 8);
  strncpy(expected[11].val, "fizz", 8);
  strncpy(expected[12].val, "13", 8);
  strncpy(expected[13].val, "14", 8);
  strncpy(expected[14].val, "fizzbuzz", 8);

  for(int i = 0; i < size; i++){
    if(strncmp(expected[i].val, actual[i].val, 8) != 0){
      printf("FAIL\n");
      printf("Expected was: \n");
      print_fizz(expected, size);
      printf("Actual was: \n");
      print_fizz(actual, size);
      return false;
    }
  }
    return true;
}
