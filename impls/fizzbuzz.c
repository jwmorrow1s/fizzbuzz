#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include"fizzbuzz.h"

fizz_t* fizzbuzz_fr(int n){
  fizz_t* ret = malloc(sizeof(fizz_t) * n);
  for(int i = 0, curr = 1; curr <= n; i++, curr++){
    bool div3 = curr % 3 == 0;
    bool div5 = curr % 5 == 0;

    if(div3 && div5){
      strncpy(ret[i].val, "fizzbuzz", FIZZ_SIZE);
    }
    else if(div3){
      strncpy(ret[i].val, "fizz", FIZZ_SIZE);
    }
    else if(div5){
      strncpy(ret[i].val, "buzz", FIZZ_SIZE);
    }
    else{
      snprintf(ret[i].val, FIZZ_SIZE, "%d", curr);
    }
  }
  return ret;
}

void print_fizz(fizz_t* fizz_array, size_t size){
  for(int i = 0; i < size; i++){
    printf("%s\n", fizz_array[i].val);
  }
}

void fizzbuzz(int n){
  for(int i = 1; i <= n; i++){
    bool div3 = i % 3 == 0;
    bool div5 = i % 5 == 0;

    if(div3){
      printf("fizz");
    }
    if(div5){
      printf("buzz");
    }
    if(!div3 && !div5){
      printf("%d", i);
    }
    printf("\n");
  }
}
