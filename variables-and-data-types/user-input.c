#include <stdio.h>

int main() {
  char singleWordString[4];
  int meaningOfTheUniverse;
  printf("Give me a number: \n");
  scanf("%i", &meaningOfTheUniverse);
  printf("Give me a word with no more than 4 characters: \n");
  /* You have to assign a length for the string and you don't have to use & in
   * a string working with scanf
   */
  scanf("%s", singleWordString);

  printf("%i is your int input\n", meaningOfTheUniverse);
  printf("%s is your string input\n", singleWordString);

  char multipleWordString[30];
  printf("Give me a string, with no more than 30 characters: \n");
  // You can't use both fgets and scanf in a C program, thanks to how they work
  fgets(multipleWordString, sizeof(multipleWordString), stdin);
  printf("%s is what you wrote\n", multipleWordString);

  return 0;
}
