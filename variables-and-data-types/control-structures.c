#include <stdio.h>

int main() {
  int myNumber = 32;
  // They work the same as in JavaScript
  if (myNumber % 2 == 0) {
    printf("%i is even\n", myNumber);
  } else {
    printf("%i is odd\n", myNumber);
  }

  (3 > 5) ? printf("The first number is greater than the second one\n")
          : printf("The first number is not greater than the second one\n");

  int dayOfTheWeek = 3;

  switch (dayOfTheWeek) {
  case 6:
    printf("It's saturday, go for a walk!\n");
    break;
  case 7:
    printf("It's sunday, go for a meal!\n");
    break;
    // The default case does not need a break statement
  default:
    printf("Hope the weekend comes soon!\n");
  }

  int counter = 0;

  while (counter < 6) {
    if (counter == 5) {
      break;
    }
    printf("%i from while\n", counter);
    counter++;
  };

  do {
    printf("%i from do / while\n", counter);
  } while (counter < 3);

  for (counter = 0; counter < 4; counter++) {
    if (counter == 0) {
      continue;
    }
    printf("%i from for loop\n", counter);
  }

  return 0;
}
