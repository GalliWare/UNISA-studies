#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  // set variables
  char input, first[20], second[20], third[20];
  int count = 0, spaces = 0;
  bool middleName = false;

  cout << "Please enter your fullname: ";
  // use a while loop to test each character input
  do
  {
    // get the character input
    cin.get(input);
    // test if that input is a white space so we can adjust our character and space count
    if (isspace(input))
    {
      spaces++;
      count = 0;
    }
    else
    {
      // if we have no spaces yet we are on the first name
      if (spaces == 0)
      {
        if (count == 0)
          first[count] = toupper(input);
        else
          first[count] = tolower(input);
        count++;
      }
      // once we have one space we are on the second or possibly the last name
      else if (spaces == 1)
      {
        if (count == 0)
          second[count] = toupper(input);
        else
          second[count] = tolower(input);
        count++;
      }
      // once pass two spaces we will just take the last word as the last name
      else
      {
        middleName = true;
        if (count == 0)
          third[count] = toupper(input);
        else
          third[count] = tolower(input);
        count++;
      }
    }
  } while (input != '\n');

  // use our bool value to know if there is more then two words, which means we have a middle name
  if (middleName)
    cout << third << ", " << first << " " << second[0] << ".";
  else
    cout << second << ", " << first;

  return 0;
}