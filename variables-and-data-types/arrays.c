#include "stdio.h"

int main() {
  // You only can save data that has the same data type than the array
  int myArray[] = {33, 22, 44, 1};

  int myOtherArray[3];
  myOtherArray[0] = 22;
  myOtherArray[1] = 23;
  myOtherArray[2] = 24;

  int length = sizeof(myOtherArray) / sizeof(myOtherArray[0]);

  for (int i = 0; i < length; i++) {
    printf("We're on the element: %i\n", i);
    printf("It's value is: %i\n", myOtherArray[i]);
  }
  printf("This is the length of the array: %i\n", length);

  // matrix, a 2D array
  int myMatrix[2][3] = {{2, 8, 3}, {22, 88, 33}};

  for (int X_index = 0; X_index < 2; X_index++) {
    for (int Y_index = 0; Y_index < 3; Y_index++) {
      printf("This is the value of one element in the matrix... %i\n",
             myMatrix[X_index][Y_index]);
    }
  }

  return 0;
}
