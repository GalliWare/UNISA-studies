#include <iostream>
using namespace std;

void inputString(string &stringInputP)
{
  cout << "Enter a string to check if it is a palindrome: ";
  cin >> stringInputP;
}

void checkString(string &stringInputP, bool &resultP)
{
  int length = stringInputP.length();
  for (int i = 0; i < (length / 2); i++)
  {
    if (stringInputP[i] != stringInputP[(length - 1) - i])
    {
      resultP = false;
      return;
    }
    else
    {
      resultP = true;
    }
  }
}

void displayResults(string stringInputP, bool resultsP)
{
  if (resultsP)
    cout << stringInputP << " is a palindrome." << endl;
  else
    cout << stringInputP << " is not a palindrome." << endl;
}

int main()
{
  string stringInput;
  bool result = false;

  inputString(stringInput);
  checkString(stringInput, result);
  displayResults(stringInput, result);

  return 0;
}