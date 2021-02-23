//Display a histogram for a series of values
#include <iostream>
using namespace std;

void displayRow(int n, char c)
{
  for (int i = 1; i <= n; i++)
    cout << c;
  cout << endl;
}

int main()
{
  int value, total, many, average;

  total = 0;
  many = 0;

  cout << "Enter the values (negative to end):" << endl;
  cin >> value;

  while (value > 0)
  {
    total += value;
    many++;
    displayRow(value, '*');
    cin >> value;
  }

  average = total / many;

  cout << "The average is " << average << endl;
  displayRow(average, '+');

  return 0;
}
