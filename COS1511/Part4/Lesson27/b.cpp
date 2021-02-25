// title rearranger if there is a The at the start
#include <iostream>
using namespace std;

void inputAndCheckTitle(string &titleP, bool &theIsThereP)
{
  cout << "Enter a title of a book: ";
  getline(cin, titleP, '\n');

  if (titleP[0] == 'T' && titleP[1] == 'h' && titleP[2] == 'e')
    theIsThereP = true;
}

void changeTitle(string &titleP)
{
  string title, the;

  the = ", " + titleP.substr(0, 3);
  title = titleP.substr(4);
  titleP.assign((title + the));
}

void displayOutput(string titleP, bool theIsThereP)
{
  if (theIsThereP)
    cout << titleP << endl;
  else
    cout << "Title unchanged" << endl;
}

int main()
{
  string title;
  bool theIsThere = false;

  // get the input and check if we have a in the begining of title
  inputAndCheckTitle(title, theIsThere);

  // if there is a the run rearrange the title
  if (theIsThere)
    changeTitle(title);

  // display the output
  displayOutput(title, theIsThere);

  return 0;
}