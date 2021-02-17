#include <iostream>
using namespace std;

float interestCalculation(int years, float interest, float amount)
{
  for (int i = 1; i <= years; i++)
  {
    amount += amount * (interest / 100);
  }

  return amount;
}

int main()
{
  float amount, interest;
  float bankAResults[3], bankBResults[3];
  int years;

  cout << "Enter the amount to be invested: ";
  cin >> amount;

  cout << "=====" << endl;
  cout << "Bank A" << endl;
  cout << "Enter the interest rate: ";
  cin >> interest;
  cout << "How many years will the amount be invested? ";
  cin >> years;

  bankAResults[0] = years;
  bankAResults[1] = interest;
  bankAResults[2] = interestCalculation(years, interest, amount);

  cout << "=====" << endl;
  cout << "Bank B" << endl;
  cout << "Enter the interest rate: ";
  cin >> interest;
  cout << "How many years will the amount be invested? ";
  cin >> years;

  bankBResults[0] = years;
  bankBResults[1] = interest;
  bankBResults[2] = interestCalculation(years, interest, amount);

  cout << "=====" << endl;
  cout << "After " << bankAResults[0] << " years, R" << amount << " invested at " << bankAResults[1];
  cout << "% will yield R " << bankAResults[2] << endl;
  cout << "After " << bankBResults[0] << " years, R" << amount << " invested at " << bankBResults[1];
  cout << "% will yield R " << bankBResults[2] << endl;

  return 0;
}