#include <iostream>
using namespace std;

int main()
{
  // set variables
  int repetitions;
  string message;

  // start of program output
  cout << "Computer Punishment" << endl;
  cout << "-------------------" << endl;

  // get inputs
  cout << "Repetitiions?  ";
  cin >> repetitions;
  cout << "Message? ";
  cin.get();
  getline(cin, message, '\n');
  cout << endl;

  // loop so we can print the message the number of times input
  for (int i = 0; i < repetitions; i++)
  {
    cout << message << endl;
  }

  return 0;
}