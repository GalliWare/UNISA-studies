// out the amount of second in a minute, hour, day and year 
#include <iostream>

using namespace std;

int main()
{
  const int minute = 60;
  const int hour = 60 * minute;
  const int day = 24 * hour;
  const int year = 360 * day;
  cout << "There are " << minute << " seconds in a minute." << endl ; 
  cout << "There are " << hour << " seconds in an hour." << endl ;
  cout << "There are " << day << " seconds in a day." << endl ;
  cout << "There are " << year << " seconds in a year." << endl ;
  return 0;
}