#include <iostream>
using namespace std;

float maxNumber(float num1, float num2, float num3)
{
  if (num1 > num2 && num1 > num3)
  {
    return num1;
  }
  else if (num2 > num1 && num2 > num3)
  {
    return num2;
  }
  else
  {
    return num3;
  }
}

int main()
{
  float num1, num2, num3, largest;
  cout << "Please provide 3 numbers: ";
  cin >> num1 >> num2 >> num3;

  largest = maxNumber(num1, num2, num3);

  cout << "The largest number is: " << largest;

  return 0;
}
