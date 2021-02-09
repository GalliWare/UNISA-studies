// Divide the two numbers provided
#include <iostream>

using namespace std;

int main()
{
  int x, y, total; 
  cout << "Enter two numbers: ";
  cin >> x >> y;
  total = x/y;
  cout << "The quotient of " << x << " and " << y << " is " << x%y << endl;
  return 0;
}
