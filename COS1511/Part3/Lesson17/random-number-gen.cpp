//Display 10 random numbers and then try guess the number
// had to include the cstdlib,ctime for intelli sense on vscode to have rand(), time() function
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
  int secret, guess, result;
  srand(time(0));

  for (int i = 0; i < 5; i++)
  {
    secret = 1 + rand() % 100;
    cout << "Guess the secret number created? ";
    cin >> guess;
    result = abs(guess - secret);
    cout << "You are off by: " << result << endl;
  }

  return 0;
}
