#include <iostream>
using namespace std;

int main()
{
  int votesForA = 0, votesForB = 0, votesForC = 0, spoiltVotes = 0, numStations = 4;
  char vote = ' ';

  for (int i = 0; i < numStations; i++)
  {
    vote = ' ';
    while (vote != 'X')
    {
      cout << "Please select candidate A,B or C: ";
      cin >> vote;
      switch (vote)
      {
      case 'A':
        votesForA++;
        break;

      case 'B':
        votesForB++;
        break;

      case 'C':
        votesForC++;
        break;

      case 'X':
        break;

      default:
        spoiltVotes++;
        break;
      }
    }
  }

  cout << endl;
  cout << "Total candidate A:" << votesForA << endl;
  cout << "Total candidate B:" << votesForB << endl;
  cout << "Total candidate C:" << votesForC << endl;
  cout << "Total spoilt votes:" << spoiltVotes << endl;

  return 0;
}