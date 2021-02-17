#include <iostream>
using namespace std;

int main()
{
  float amount, rate, years;

  cout << "Enter an amount of Rands: ";
  cin >> amount;
  cout << "Enter the interest rate: ";
  cin >> rate;
  cout << "Enter the number of years: ";
  cin >> years;

  cout.setf(ios::fixed);
  cout.precision(2);

  for (int i = 0; i <= years; i++)
  {
    amount += amount * (rate / 100);
    cout << "After " << years << " years the amount will be " << amount << endl;
  }

  return 0;
}