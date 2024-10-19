#include <stdio.h>

void writeToFile(FILE *pointer);
void appendToFile(FILE *pointer);
void readFile(FILE *pointer);

int main() {
  FILE *filePointer;
  writeToFile(filePointer);
  appendToFile(filePointer);
  readFile(filePointer);
  return 0;
}

// Both modes 'w' and 'a' will create the file if it not exists

void writeToFile(FILE *pointer) {
  pointer = fopen("test.txt", "w");
  fprintf(pointer, "This is a trap\n");
  fclose(pointer);
}

void appendToFile(FILE *pointer) {
  pointer = fopen("test.txt", "a");
  fprintf(pointer, "This is not a trap\n");
  fclose(pointer);
}

void readFile(FILE *pointer) {
  char fileText[300];

  pointer = fopen("test.txt", "r");

  if (pointer == NULL) {
    printf("The test.txt file does not exist");
    return;
  }

  // This just reads the first line
  // fgets(fileText, 300, pointer);
  // printf("%s", fileText);

  // This will read all the lines in the file
  while (fgets(fileText, 300, pointer)) {
    printf("%s", fileText);
  }

  fclose(pointer);
}
