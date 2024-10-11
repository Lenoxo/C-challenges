#include <stdio.h>

int main() {
  int myAge = 19;
  // * here creates a pointer variable
  int *myAgePointer = &myAge; // & is the reference operator

  // The pointer variable has to be of the same type as the variable value

  printf("%i is myAge\n", myAge);
  printf("%p is myAge memory address, obtained with the &\n", &myAge);
  printf("%p is myAge memory address, obtained with myAgePointer\n",
         myAgePointer);
  // * here is the dereference operator
  printf("%i is myAge value, obtained with *myAgePointer\n", *myAgePointer);

  char message[] = "Hello there!";
  printf("%p\n", message);
  printf("%p\n", &message);
  printf("%p\n", &message[0]);
  printf("%lu\n", sizeof(message));

  // With bigger arrays is more efficient to work using pointers

  int numbers[4] = {33, 22, 42, 11};
  *numbers = 21;
  *(numbers + 1) = 23;
  *(numbers + 2) = 25;
  *(numbers + 3) = 27;

  printf("Iterating an array of integers: \n");
  for (int i = 0; i < 4; i++) {
    printf("%i\n", numbers[i]);
  };

  return 0;
}
