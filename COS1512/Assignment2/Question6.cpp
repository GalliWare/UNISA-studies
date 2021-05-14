#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string target, string delimiter);

int main()
{
  vector<string> splitList;
  string wordList = "do,re,me,fa,so,la,ti,do", listDelimiter = ",";

  cout << "This program will split the list \"" << wordList << "\" with the delimiter \""
       << listDelimiter << "\" into a vector and display it nicely to the console." << endl
       << endl;

  splitList = split(wordList, listDelimiter);

  cout << "Vector nicely displayed below. " << endl;
  // logic to display the vector nicely.
  for (int i = 0; i < splitList.size(); i++)
  {
    if ((i) == 0)
      cout << '"' << splitList[i] << '"';
    else if ((i + 1) == splitList.size())
      cout << " and \"" << splitList[i] << '"';
    else
      cout << ", \"" << splitList[i] << '"';
  }

  return 0;
}

vector<string> split(string target, string delimiter)
{
  vector<string> splitWord;
  string word;
  int startLoc = 0, delimitLoc = 0, delimitLocFinal = 0;

  // use loop to run through the string till the delimiters become false
  do
  {
    delimitLoc = target.find(delimiter[0], startLoc);
    word = target.substr(startLoc, (delimitLoc - startLoc));
    splitWord.push_back(word);
    startLoc = delimitLoc + 1;
  } while (delimitLoc != -1);

  return splitWord;
}