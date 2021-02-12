#include <iostream>
using namespace std;

int main()
{
  // prime tester from the book modified to not output is not prime in while loop
  int x, y;
  bool notPrime = false;
  cout << "Enter a positive integer: ";
  cin >> y;
  x = 2;
  while (x != y && !notPrime)
  {
    notPrime = !(y % x);
    x++;
  }
  if (notPrime)
    cout << y << " is not prime!" << endl;
  else
    cout << y << " is prime!" << endl;
  return 0;
}