#include <iostream>
#include <cassert>
#include <ctime>
using namespace std;

int main()
{
  int year = 0, month = 0, day = 0, currentYear = 0, age = 0;
  bool bornLeap = false;

  cout << "Please enter your date of birth: ";
  cin >> day >> month >> year;

  // check the year is no more then the current year
  time_t now = time(0);
  tm *ltm = localtime(&now);
  currentYear = 1900 + ltm->tm_year;
  assert(year <= currentYear);

  // check that month is no larger then 12
  assert(month <= 12);

  // check the day based of the valid month
  if (month % 2)
  {
    assert(day <= 31);
  }
  else if (month == 2)
  {
    if (year % 4)
      assert(day <= 28);
    else
      assert(day <= 29);
  }
  else
  {
    assert(day <= 30);
  }

  // leap year check
  if (year % 4)
    bornLeap = true;
  if (bornLeap)
    cout << "Your where born in a leap year." << endl;
  else
    cout << "Your where not born in a leap year." << endl;

  // calculate age
  age = currentYear - year;

  cout << "This year you will be: " << age << endl;

  return 0;
}