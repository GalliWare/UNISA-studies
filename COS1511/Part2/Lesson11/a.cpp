#include <iostream>
using namespace std;

int main()
{
  // set constants
  const int LOWEST_NUMBER = 10, LARGEST_NUMBER = 20;
  // set variables
  int number;
  bool loop = true;

  // as we set loop we can start the loop
  while (loop)
  {
    cout << "Please provide number between 10 and 20: ";
    cin >> number;

    if (number > LOWEST_NUMBER && number < LARGEST_NUMBER)
    {
      loop = false;
    }
  }

  return 0;
}