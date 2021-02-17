//Determine the maximum of three values 2
#include <iostream>
using namespace std;

float max2(float x, float y)
{
  if (x > y)
    return x;
  else
    return y;
}

float max3(float x, float y, float z)
{
  return max2(x, max2(y, z));
}

int main()
{
  float a, b, c, largest;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;
  largest = max3(a, b, c);
  cout << "The maximum is: " << largest << endl;
  return 0;
}
