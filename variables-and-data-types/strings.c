#include <stdio.h>
#include <string.h>
// If you want to use str functions you have to use this header file

int main() {
  // C does not have a native string type, so you have an array of characters
  // C compiler adds \0 automatically with this form
  char mySecondString[] = "Hello there!";
  char theHardestString[] = {'H', 'i', '!', '\0'};

  printf("Hello, string1: %s, string2: %s\n", mySecondString, theHardestString);

  mySecondString[0] = 'J';
  printf("A Jello greeting: %s\n", mySecondString);

  printf("A meme: %c\n", mySecondString[1]);

  // Getting the length of the string
  // 1, using sizeof, that counts even the \0 sequence
  int length = sizeof(mySecondString) / sizeof(mySecondString[0]);
  printf("Length of the first string: %i\n", length);

  // 2, using strlen
  printf("Length of the first string: %lu\n", strlen(mySecondString));

  // Concatenate strings
  char stringy[11] = "Jejeje ";
  char stringuified[] = "Hola";

  // Insert the src string into the dest one
  strcat(stringy, stringuified);
  printf("Concatenated string: %s\n", stringy);

  char original[] = "Ratata";
  char copy[6];

  // Copy the src string into the dest one
  strcpy(copy, original);
  printf("Copied string: %s\n", copy);

  char stringComp1[] = "Test again";
  char stringComp2[] = "Test again";
  char stringComp3[] = "Bro!";

  printf("If stringComp1 == stringcomp2 return 0: %d\n",
         strcmp(stringComp1, stringComp2));
  printf("If stringComp1 != stringcomp3 return another number: %d\n",
         strcmp(stringComp1, stringComp3));
  return 0;
}
