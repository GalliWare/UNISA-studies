#include <iostream>
using namespace std;

int Mysolution()
{
  // set variables
  int num1, num2, remainder;

  // get input
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  // check for 0 values
  while (num1 == 0 || num2 == 00)
  {
    cout << "cannot use 0 for either of the numbers give it another try" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
  }

  // calculate if number1 is a factor of number2
  remainder = num2 % num1;

  if (remainder)
    cout << num1 << " is not a factor of " << num2 << endl;
  else
    cout << num1 << " is a factor of " << num2 << endl;

  return 0;
}

int BooksSolution()
{
  int x, y;
  cout << "Enter two integers: ";
  cin >> x >> y;

  if (x != 0 && y % x == 0)
    cout << x << " is a factor of " << y << endl;
  else
    cout << x << " is not a factor of " << y << endl;

  return 0;
}

void main()
{
  BooksSolution();
}