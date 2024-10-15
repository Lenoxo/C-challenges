#include <stdio.h>
// Is a good practice to declare all the functions above main
// And define them below main
// Declaring is giving a name, return type and parameters type to a function
int sumTwoNums(int x, int y);
int getLocalSenseOfTheUniverse();
void greetings(char name[]);
// The functions scope can be global or local

int globalSenseOfTheUniverse = 42;

int main() {
  printf("Sum result: %i\n", sumTwoNums(33, 44));
  printf("Global sense: %i, Local sense: %i\n", globalSenseOfTheUniverse,
         getLocalSenseOfTheUniverse());
  greetings("Gustavo");
  return 0;
}

// Writing the code block for the function is defining the function in C

int sumTwoNums(int x, int y) { return x + y; }

int getLocalSenseOfTheUniverse() {
  // This variable is only accesible from this function block
  int localSenseOfTheUniverse = 43;
  return localSenseOfTheUniverse;
}

void greetings(char name[]) { printf("Hello, how are you today %s?\n", name); }
