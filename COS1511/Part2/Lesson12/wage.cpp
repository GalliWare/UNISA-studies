#include <iostream>
using namespace std;

int main()
{
  // set variables
  float startingTime = 0,
        finishingTime = 0,
        pay = 0;

  // set up constant variables used
  const float AFTERNOON_START = 1,
              AFTERNOON_FINISH = 6,
              EVENING_START = 6,
              EVENING_FINISH = 12,
              EVENING_PPH = 44.00,
              AFTERNOON_PPH = 32.50;

  // get times for users
  cout << "Wage Calculation" << endl;
  cout << "================" << endl;
  cout << "Starting Time: ";
  cin >> startingTime;
  cout << "Finishing Time: ";
  cin >> finishingTime;

  // calculate pay
  // afternoon pay 32.5 between 1 and 6
  // evening pay 44 between 6 and 12
  if (startingTime < EVENING_START)
  {
    if (finishingTime <= EVENING_START)
      pay = (finishingTime - startingTime) * AFTERNOON_PPH;
    else
      pay = (EVENING_START - startingTime) * AFTERNOON_PPH + (finishingTime - EVENING_START) * EVENING_PPH;
  }
  else
  {
    pay = (finishingTime - startingTime) * EVENING_PPH;
  }

  cout.setf(ios::fixed);
  cout.precision(2);
  cout << "The payment is R " << pay << endl;

  return 0;
}