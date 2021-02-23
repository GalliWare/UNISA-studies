#include <iostream>
using namespace std;

void setTotal(int &totalMarkCounterP)
{
  const int MAX_COUNT = 100, MIN_COUNT = 5;

  cout << "How many marks do you have? (5-100) ";
  cin >> totalMarkCounterP;

  if (totalMarkCounterP > MAX_COUNT)
  {
    do
    {
      cout << totalMarkCounterP << " is not valid, please select between 5-100: ";
      cin >> totalMarkCounterP;
    } while (totalMarkCounterP > MAX_COUNT || totalMarkCounterP < MIN_COUNT);
  }
}

int main()
{
  const int MAX_MARK = 100, MIN_MARK = 0;
  float average = 0, total = 0;
  int totalMarkCounter = 0;

  setTotal(totalMarkCounter);

  float marks[totalMarkCounter];

  for (int i = 0; i < totalMarkCounter; i++)
  {
    cout << "Enter mark(must be between 0-100): ";
    cin >> marks[i];
    if (marks[i] > MAX_MARK || marks[i] < MIN_MARK)
    {
      do
      {
        cout << "Mark " << marks[i] << " not valid. Mark has to be between 0-100: ";
        cin >> marks[i];
      } while (marks[i] > MAX_MARK || marks[i] < MIN_MARK);
    }
    total += marks[i];
  }

  average = total / totalMarkCounter;

  for (int i = 0; i < totalMarkCounter; i++)
  {
    if (marks[i] > average)
      cout << "Better then average: " << marks[i] << endl;
  }

  return 0;
}