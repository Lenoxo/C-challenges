#include "stdio.h"

int num1 = 32;
int num2 = 10;

double decimalGrande = 3.333;
char userText[30];

void writeToFile(int num);
void writeNumToFile(int num, FILE *fpointer);

int main() {
  printf("hello there\n");
  printf("%d sense of the universe\n", num1 + num2);
  printf("%lf sense of the universe\n", decimalGrande);
  printf("Write the last part of your file: ");
  fgets(userText, sizeof(userText), stdin);
  writeToFile(num1);
}

void writeToFile(int num) {
  FILE *filePointer;
  for (int i = 1; i <= num; i++) {
    printf("%i\n", i);
    writeNumToFile(i, filePointer);
  }
  writeTextToFile(filePointer);
}

void writeNumToFile(int num, FILE *fpointer) {
  fpointer = fopen("test.txt", "a");
  fprintf(fpointer, "%i\n", num);
  fclose(fpointer);
}

void writeTextToFile(FILE *fpointer) {
  fpointer = fopen("test.txt", "a");
  fprintf(fpointer, "%s\n", userText);
  fclose(fpointer);
}