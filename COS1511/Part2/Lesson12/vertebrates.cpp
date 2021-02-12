#include <iostream>
using namespace std;

int main()
{
  char answer;

  cout << "This program will help you classify any vertebrate that you can think of" << endl;
  cout << "Is the animal warm-blood? (Y/N)? ";
  cin >> answer;
  if (answer == 'Y')
  {
    cout << "Does it suckle it's young? (Y/N)? ";
    cin >> answer;
    if (answer == 'Y')
      cout << "It is a mammal" << endl;
    else
      cout << "It is a bird" << endl;
  }
  else
  {
    if (answer == 'N')
    {
      cout << "Does it breathe via Gills in it's life? (Y/N)? ";
      cin >> answer;
      if (answer == 'Y')
      {
        cout << "Does it breathe via Gills all it's life? (Y/N)? ";
        cin >> answer;
        if (answer == 'Y')
          cout << "It is a fish" << endl;
        else
          cout << "It is a amphibian" << endl;
      }
      else
        cout << "It is a reptile" << endl;
    }
    else
      cout << "Answer has to be Y or N, please try the program again";
  }
  return 0;
}