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
  
  // These are the format specifiers, shown by their corresponding data type
  printf("This is the integer: %d", integerVariable);
  printf("This is the floatNumber: %f", floatNumber);
  printf("This is the singleCharacterVariable: %c", singleCharacterVariable);

  printf("This is a chained answer, what is the meaning of life?: %d.\nWhat is the trust you have on your habilities in a scale of 0 to 10?: %f.\nWhat is the name of this programming language?: %c.\n", integerVariable, floatNumber, singleCharacterVariable);
  return 0;
}
