#include <iostream>
using namespace std;

int main()
{
  int programsDone = 0, result = 0;

  // do while loop for each result, finish when the result is more then 50% and the program has been completed 5 times
  // nothing about average results in the question, so we just take the last result to see if we have 50%
  do
  {
    cout << "Enter program result: ";
    cin >> result;
    programsDone++;
  } while ((result < 50) || (programsDone <= 5));

  cout << "Good! You can now proceed to the next exercise" << endl;
  return 0;
}