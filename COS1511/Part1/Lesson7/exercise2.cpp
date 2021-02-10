#include <iostream>
using namespace std;

int main()
{
  char letter;
  int position;

  cout << "Enter an upper case letter: ";
  cin >> letter;

  position = letter - 64;

  cout << letter << " is in position " << position << " in the alphabet and ASCII value is " << int(letter);

  return 0;
}