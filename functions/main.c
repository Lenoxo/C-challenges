#include <math.h>
#include <stdio.h>
// Is a good practice to declare all the functions above main
// And define them below main
// Declaring is giving a name, return type and parameters type to a function
int sumTwoNums(int x, int y);
int getLocalSenseOfTheUniverse();
void greetings(char name[]);
// The scope can be global or local
int globalSenseOfTheUniverse = 42;

int fibonacci(int num);

int main() {
  // Scope experiments
  printf("Sum result: %i\n", sumTwoNums(33, 44));
  printf("Global sense: %i, Local sense: %i\n", globalSenseOfTheUniverse,
         getLocalSenseOfTheUniverse());
  greetings("Gustavo");

  // Fibonacci
  int reps = 6;
  printf("%i is the result of using the fibonacci sequence %i times\n",
         fibonacci(reps), reps);
  for (int i = 0; i < reps; i++) {
    printf("%i ", fibonacci(i));
  }
  printf("\n");

  // Math functions, you need math.h header file to use them

  int num1 = 3, num2 = 4;

  printf("Square Root (Raíz cuadrada): %lf\n", sqrt(45.5));
  printf("Floor a float number: %.0f\n", floor(45.5556));
  printf("Ceil a float number: %.0f\n", ceil(45.5556));
  printf("Power of x, by y times: %.1f\n", pow(num1, num2));

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

int fibonacci(int num) {
  if (num == 0) {
    return 0;
  }
  if (num == 1) {
    return 1;
  }

  return fibonacci(num - 1) + fibonacci(num - 2);
}

// These methods are also in JavaScript xD
