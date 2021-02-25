// Test whether a string is a palindrome
#include <iostream>
#include <string>
using namespace std;

string reverse(string s)
{
  string answer = "";
  for (int i = 0; i < s.size(); i++)
    answer = s[i] + answer;
  return answer;
}

bool isPalindrome(string theWord)
{
  return theWord == reverse(theWord);
}

int main()
{
  string oneWord;

  // Prompt for and input a string
  cout << "Enter a single word: ";
  cin >> oneWord;

  // Call isPalindrome and display an appropriate message
  if (isPalindrome(oneWord))
    cout << "It is a palindrome" << endl;
  else
    cout << "No, it isn’t a palindrome" << endl;

  return 0;
}
