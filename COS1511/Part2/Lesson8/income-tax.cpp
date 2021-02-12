#include <iostream>
using namespace std;

int main()
{
  // set variables
  float salary, tax, taxPayable;

  // default tax
  tax = 0.3;

  // get inputs
  cout << "Salary?  ";
  cin >> salary;

  // check salary and change tax if more them 70,000
  if (salary > 70000)
  {
    tax = 0.40;
  };
  taxPayable = salary * tax;

  cout << "Tax payable on salary is: R " << taxPayable << endl;

  return 0;
}