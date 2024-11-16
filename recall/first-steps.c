#include "stdio.h"

int num1 = 32;
int num2 = 10;

double decimalGrande = 3.333;

void countFrom1toNumber(int Num);

int main() {
  printf("hello there\n");
  printf("%d sense of the universe", num1 + num2);
  printf("%lf sense of the universe", decimalGrande);
  countFrom1toNumber(num1);
}

void countFrom1toNumber(int num) {
  for (int i = 1; i <= num; i++) {
    printf("%i", i);
  }
}
