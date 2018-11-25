#ifndef FIZZBUZZ_H
#define FIZZBUZZ_H
#define FIZZ_SIZE 9


typedef struct fizz_t fizz_t;
struct fizz_t{
  char val[FIZZ_SIZE];
};

void fizzbuzz(int n);

void print_fizz(fizz_t* fizz_array, size_t size);

fizz_t* fizzbuzz_fr(int n);

#endif
