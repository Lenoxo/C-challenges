#include <iostream>
using namespace std;

// Basics

int myNumber = 10;
double myFloatingNumber = 9.35; // Float
bool myBoolean = true;
char mySingleCharacter = 'a';
string myMultipleCharacterString = "Hello again";

int main() {
  int temp;
  myNumber = 50;
  temp = myNumber;
  cout << temp << endl;

  // Declaring and asigging multiple variables of the same data type
  char d = 'D', a = 'A', b = 'B';
  cout << d << a << b << endl;

  int num1, num2;

  num1 = 34, num2 = 60;
  cout << num1 + num2 << endl;

  // Variables in c++ are also known as identifiers, and you can make them
  // constants using const, for read-only variables, like in js

  const string greatMessage = "The water makes you wet, and the fire burns you";
  cout << greatMessage << endl;
}
