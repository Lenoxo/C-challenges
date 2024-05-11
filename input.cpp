#include <iostream>
using namespace std;

int sum(int num1, int num2) { return num1 + num2; }

int main() {
  string input;
  cout << "Write whatever you want: ";
  cin >> input;
  cout << "What you typed is: " << input << endl;
  int input1, input2;
  cout << "Write the first number: ";
  cin >> input1;
  cout << "Write the second number: ";
  cin >> input2;
  cout << "The result is: " << sum(input1, input2) << endl;
  return 0;
}
