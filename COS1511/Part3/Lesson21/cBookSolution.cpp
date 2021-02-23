//Calculate weeks, days, hours, minutes and seconds
#include <iostream>
using namespace std;

void calcRemainder(int unit1, int ratio, int &unit2, int &remUnit1)
{
  unit2 = unit1 / ratio;
  remUnit1 = unit1 % ratio;
}

int main()
{
  int seconds, minutes, hours, days, weeks;
  int remSeconds, remMinutes, remHours, remDays;

  cout << "Enter a large (positive) integer: ";
  cin >> seconds;

  calcRemainder(seconds, 60, minutes, remSeconds);
  calcRemainder(minutes, 60, hours, remMinutes);
  calcRemainder(hours, 24, days, remHours);
  calcRemainder(days, 7, weeks, remDays);

  cout << seconds << " seconds represents" << endl;
  cout << weeks << " weeks, " << remDays << " days, ";
  cout << remHours << " hours, " << remMinutes << " minutes";
  cout << " and " << remSeconds << " seconds" << endl;

  return 0;
}