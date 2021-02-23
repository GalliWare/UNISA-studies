#include <iostream>
using namespace std;

void calcTime(int &secondsP, int &minutesP, int &hoursP, int &daysP, int &weeksP)
{
  int SECONDS = secondsP;

  secondsP = SECONDS % 60;
  SECONDS -= secondsP;
  minutesP = (SECONDS / 60) % 60;
  hoursP = ((SECONDS / 60) / 60) % 24;
  daysP = (((SECONDS / 60) / 60) / 24) % 7;
  weeksP = ((((SECONDS / 60) / 60) / 24) / 7);
}

void displayTime(int &secondsP, int &minutesP, int &hoursP, int &daysP, int &weeksP)
{
  cout << weeksP << " weeks, ";
  cout << daysP << " days, ";
  cout << hoursP << " hours, ";
  cout << minutesP << " minutes and ";
  cout << secondsP << " seconds " << endl;
}

int main()
{
  int seconds, minutes, hours, days, weeks;

  cout << "Enter number of seconds: ";
  cin >> seconds;

  calcTime(seconds, minutes, hours, days, weeks);

  displayTime(seconds, minutes, hours, days, weeks);

  return 0;
}