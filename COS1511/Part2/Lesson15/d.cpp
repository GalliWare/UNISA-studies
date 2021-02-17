//What does it do?
// gets the cubed root of a number
#include <iostream>
using namespace std;

int main()
{
  float a, x;
  const float TOLERANCE = 0.00001;
  cout << "Enter a floating point number greater than 1: ";
  cin >> a;
  x = a;
  int i = 0;
  // for (x = a; x * x * x - a > TOLERANCE && i < 20; x = (2 * x + a / (x * x)) / 3)
  // {
  //   cout << x << endl;
  //   i++;
  // }
  // a better solution as per the book is to use a while loop like below.
  // More readable and understandable then the for loop above.
  while (x * x * x - a > TOLERANCE && i < 20)
  {
    cout << x << endl;
    x = (2 * x + a / (x * x)) / 3;
    i++;
  }
  cout << "The answer is " << x << endl;
  return 0;
}