#include <stdio.h>

// This is a single line comment
/*

This is a
Multiline comment

*/

char identifier = 'A'; // identifier is another way to call a variable in C

int integerVariable = 42;
float floatNumber = 9.2;
char singleCharacterVariable = 'C'; // Ironic...

int main() {
  floatNumber = 8.9; // You only can override a variable within a function
  float myOtherFloatingThought = floatNumber;

  // Declare several variables with the same data type
  int count1, count2, count3, meaningOfLife = 42;

  // Assign a value for several variables
  count1 = count2 = count3 = 3;

  printf("%d\n", count1 + count3 + count2);

  printf("Hello world from C!\n"); // \n is an escape sequence, that forces a
                                   // line jump
  printf("This is my new line\n");
  printf("This is a line with two line jumps: \n\n");
  printf("This is a backslash: \" \\ \"\n"); // These are other escape sequences
  printf("This is a backslash with a tab: \t \" \\ \"\n");

  // These are the format specifiers, shown by their corresponding data type
  printf("This is the integer: %d\n", integerVariable);
  printf("This is the floatNumber: %f\n", myOtherFloatingThought);
  printf("This is the singleCharacterVariable: %c\n", singleCharacterVariable);

  printf("This is a chained answer, what is the meaning of life?: %d.\nWhat is "
         "the trust you have on your habilities in a scale of 0 to 10?: "
         "%f.\nWhat is the name of this programming language?: %c.\n",
         integerVariable, floatNumber, singleCharacterVariable);

  // Convert minutes to hours
  int minutes = 360, hours;
  hours = minutes / 60;
  printf("%d minutes to hours are: %d\n", minutes, hours);

  return 0;
}
