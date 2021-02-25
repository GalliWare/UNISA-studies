// Replaces all occurrences of a word in a sentence with another word
#include <iostream>
#include <string>
using namespace std;
int firstSolution()
{
  string sentence, word1, word2;
  int position;
  // Input a sentence and two words
  cout << "Enter a sentence: ";
  getline(cin, sentence, '\n');
  cout << "Enter a word to search for: ";
  cin >> word1;
  cout << "Enter a word to replace it with: ";
  cin >> word2;
  // Search for the first word and replace all occurrences // of it with the second word
  position = sentence.find(word1);
  while (position != -1)
  {
    sentence.erase(position, word1.size());
    sentence.insert(position, word2);
    position = sentence.find(word1);
  }
  // Display the new sentence
  cout << "The new sentence is: " << sentence << endl;
}

// Replaces all occurrences of a word in a sentence with another word
#include <iostream>
#include <string>
using namespace std;
int secondSolution()
{
  string sentence, word1, word2;
  int position;
  // Input a sentence and two words
  cout << "Enter a sentence: ";
  getline(cin, sentence, '\n');
  cout << "Enter a word to search for: ";
  cin >> word1;
  cout << "Enter a word to replace it with: ";
  cin >> word2;
  // Search for the first word and replace all occurrences
  // of it with the second word
  position = sentence.find(word1);
  while (position != -1)
  {
    sentence.replace(position, word1.size(), word2);
    position = sentence.find(word1);
  } // Display the new sentence
  cout << "The new sentence is: " << sentence << endl;
}

int main()
{
  firstSolution();
  secondSolution();
  return 0;
}