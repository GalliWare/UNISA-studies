//Compares compound interest on investments at two banks
#include <iostream>
#include <cmath>
using namespace std;
float compoundInterest(float amountP, float rateP, int termP)
{
  return amountP * pow(1 + rateP / 100, termP);
}
int main()
{
  float amount, rateA, totalA, rateB, totalB;
  int termA, termB;

  cout << "Enter the amount to be invested: ";
  cin >> amount;

  cout << "======" << endl
       << "Bank A";
  cout << endl
       << "======" << endl;
  cout << "Enter the interest rate: ";
  cin >> rateA;
  cout << "How many years will the amount be invested? ";
  cin >> termA;

  cout << "======" << endl
       << "Bank B";
  cout << endl
       << "======" << endl;
  cout << "Enter the interest rate: ";
  cin >> rateB;
  cout << "How many years will the amount be invested? ";
  cin >> termB;

  totalA = compoundInterest(amount, rateA, termA);
  totalB = compoundInterest(amount, rateB, termB);

  cout.setf(ios::fixed);
  cout.precision(2);

  cout << "After " << termA << " years, R" << amount;
  cout << " invested at " << rateA << "% will yield R";
  cout << totalA << endl;
  cout << "After " << termB << " years, R" << amount;
  cout << " invested at " << rateB << "% will yield R";
  cout << totalB << endl;
  return 0;
}
