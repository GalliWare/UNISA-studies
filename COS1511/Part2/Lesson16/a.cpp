// coin toss game
#include <iostream>
using namespace std;

int main()
{
  const int PAYOUT_BASE_VALUE = 2;
  int rounds, payoutTotal = 0, payoutAverage = 0;

  // get the number of times the game should be played.
  cout << "How many rounds would you like to play? ";
  cin >> rounds;

  for (int i = 1; i <= rounds; i++)
  {
    char result;
    int payoutNumber = 0, payoutForGame = 1;

    do
    {
      cout << "Enter result (H)eads or (T)ails? ";
      cin >> result;
      payoutNumber++;
    } while (result != 'H');

    for (int j = 1; j <= payoutNumber; j++)
      payoutForGame = payoutForGame * PAYOUT_BASE_VALUE;

    payoutTotal += payoutForGame;

    cout << "\nThis game pays out: R " << payoutForGame << endl;
  }

  payoutAverage = payoutTotal / rounds;

  cout << "\nAverage payout was: R " << payoutAverage;

  return 0;
}