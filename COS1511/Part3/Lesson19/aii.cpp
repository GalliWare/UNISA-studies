//Raises one number to an integer power
// a ajusted to use local variables
#include <iostream>
using namespace std;

float iPow(float num, int power)
{
  float answer;
  int i;
  answer = 1;
  for (i = 1; i <= power; i++)
    answer *= num;
  return answer;
}

int main()
{
  float num1, num2, answer1, answer2, sum;
  int power1, power2;

  cout << "Enter a number and a non-negative integer: ";
  cin >> num1 >> power1;
  cout << "Enter a number and a non-negative integer: ";
  cin >> num2 >> power2;

  answer1 = iPow(num1, power1);
  answer2 = iPow(num2, power2);

  cout << num1 << " to the power " << power1 << " = ";
  cout << answer1 << endl;
  cout << num2 << " to the power " << power2 << " = ";
  cout << answer2 << endl;

  sum = answer1 + answer2;

  cout << "Sum of answer is = " << sum << endl;

  return 0;
}