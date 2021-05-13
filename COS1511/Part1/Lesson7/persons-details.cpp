#include <iostream>
using namespace std;

int main()
{
  // set variables
  string firstName, lastName, title, rearrangedName;

  // get title
  cout << "Please enter title: ";
  cin >> title;

  // get first name
  cout << "Please enter first name: ";
  cin.get();
  getline(cin, firstName, '\n');

  // get first name
  cout << "Please enter last name: ";
  getline(cin, lastName, '\n');

  // join the name to a new arrangement
  rearrangedName = lastName + ", " + title + ", " + firstName[0] + ".";

  // output rearranged name
  cout << rearrangedName;

  return 0;
}