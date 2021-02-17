// guessing game
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
  int secret = 0, guess = 0, result = 0, closestID = 0, closestNumber = 0, closestResult = 100, userID = 0;
  srand(time(0));
  secret = 1 + rand() % 100;

  do
  {
    userID++;
    cout << "Guess the secret number created? ";
    cin >> guess;
    result = abs(guess - secret);
    if (result < closestResult)
    {
      closestResult = result;
      closestNumber = guess;
      closestID = userID;
    }
  } while (guess != 0);

  cout << "The closest was " << closestNumber << " by user " << closestID;

  return 0;
}
