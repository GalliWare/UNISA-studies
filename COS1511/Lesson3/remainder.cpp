// Divide the two numbers provided
#include <iostream>

using namespace std;

int main()
{
  int x, y, total; 
  cout << "Enter two numbers: ";
  cin >> x >> y;
  total = x%y;
  cout << "The remainder of " << x << " and " << y << " is " << total << endl;
  return 0;
}
