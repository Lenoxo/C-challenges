#include <stdio.h>

// This is a single line comment
/*

This is a
Multiline comment

*/

int integerVariable = 42;
float floatNumber = 9.2;
char singleCharacterVariable = 'C'; // Ironic...

int main() {
  printf("Hello world from C!\n"); // \n is an escape sequence, that forces a
                                   // line jump
  printf("This is my new line\n");
  printf("This is a line with two line jumps: \n\n");
  printf("This is a backslash: \" \\ \"\n"); // These are other escape sequences
  printf("This is a backslash with a tab: \t \" \\ \"\n");
  return 0;
}
