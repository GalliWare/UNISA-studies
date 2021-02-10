// simple two word spoonerism program
#include <iostream>
using namespace std;

int main()
{
  // set variables
  string word1, word2, output;
  char letter1, letter2;

  // get the two words to use for spoonerism
  cout << "Enter an upper case letter: ";
  cin >> letter1 >> word1 >> letter2 >> word2;

  // concate the words
  output = letter2 + word1 + " " + letter1 + word2;

  // we output the results
  cout << output;

  return 0;
}