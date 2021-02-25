#include <iostream>
using namespace std;

void changeSentence(string &sentenceP, string wordP, string replacementP)
{
  int postion = sentenceP.find(wordP);
  while (postion != -1)
  {
    sentenceP.replace(sentenceP.find(wordP), wordP.length(), replacementP);
    postion = sentenceP.find(wordP);
  }
}

int main()
{
  string sentence, word, replacement;

  cout << "Enter a sentence: ";
  getline(cin, sentence, '\n');

  cout << "Enter a word to search for: ";
  cin >> word;

  cout << "Enter a word to replace it with: ";
  cin >> replacement;

  changeSentence(sentence, word, replacement);

  cout << "The new sentence is: ";
  cout << sentence << endl;

  return 0;
}