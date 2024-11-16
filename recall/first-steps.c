#include "stdio.h"

int num1 = 32;
int num2 = 10;

double decimalGrande = 3.333;

void countFrom1toNumber(int num);
void writeNumToFile(int num, FILE *fpointer);

int main() {
  printf("hello there\n");
  printf("%d sense of the universe\n", num1 + num2);
  printf("%lf sense of the universe\n", decimalGrande);
  countFrom1toNumber(num1);
}

void countFrom1toNumber(int num) {
  FILE *filePointer;
  for (int i = 1; i <= num; i++) {
    printf("%i\n", i);
    writeNumToFile(i, filePointer);
  }
}

void writeNumToFile(int num, FILE *fpointer) {
  fpointer = fopen("test.txt", "a");
  fprintf(fpointer, "%i\n", num);
  fclose(fpointer);
}
