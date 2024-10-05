#include <stdio.h>

int main() {
  int number1 = 20;
  // It can store up to 6 - 7 decimal digits - Takes up 4 bytes
  float float1 = 13.33;
  // It can store up to 15 decimal digits - Takes up 8 bytes
  double float2 = 13.44;
  char singleCharacter = 'E';

  char myFirstString[] = "Hello there!";
  char ascii = 67;

  printf("%i\n", number1); // %i and %d work
  printf("%f\n", float1);
  printf("%lf\n", float2); // %lf is just used for double data type
  printf("%c\n", singleCharacter);
  printf("%s\n", myFirstString); // %s is the format specifier for strings
  // You can specify the decimal precision using a dot (.)
  printf("%.2f\n", float1);

  // %lu is the format specifier for Long Unsigned
  printf("Size of an int: %lu \n", sizeof(number1));
  printf("Size of a float: %lu \n", sizeof(float1));
  printf("Size of a double: %lu \n", sizeof(float2));
  printf("Size of a char: %lu \n", sizeof(ascii));
  printf("Size of a string: %lu \n", sizeof(myFirstString));

  // Type conversion

  int maxScore = 900;
  int currentScore = 760;

  float percentage = (float)currentScore / maxScore * 100.0;

  printf("The percentage of completion is: %.1f\n", percentage);

  // Constants - Same as JS xD
  const int MEANINGOFLIFE = 42; // I'll think a better joke later...

  printf("Meaning of life: %i", MEANINGOFLIFE);

  return 0;
}
