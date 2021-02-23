//Raises one number to an integer power
// Book showing a poor use of Global variables
#include <iostream>
using namespace std;

float x, answer;
int i, n;

float iPow()
{
  answer = 1;
  for (i = 1; i <= n; i++)
    answer *= x;
  return answer;
}

int main()
{
  cout << "Enter a number and a non-negative integer: ";
  cin >> x >> n;
  cout << x << " to the power " << n << " = ";
  cout << iPow() << endl;
  return 0;
}