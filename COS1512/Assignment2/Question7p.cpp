// program that asks a user to enter the size of a dynamic array that stores a list of integers.
#include <iostream>
using namespace std;

int main()
{
  typedef int *IntPtr;
  IntPtr a;
  int arraySize = 0, largestNum = 0, position = 1;

  cout << "Please enter the number of elements for your list: ";
  cin >> arraySize;

  // Create the dynamic array
  a = new int[arraySize];

  // loop that allowing the user to enter an integer value for each array element.
  // and finding the largest value in the array as well as its position in the array.
  for (int i = 0; i < arraySize; i++)
  {
    cout << "Please enter the number for " << (i + 1) << " of " << arraySize << ": ";
    cin >> a[i];
    if (i == 0)
    {
      largestNum = a[i];
    }
    else
    {
      if (a[i] > largestNum)
      {
        largestNum = a[i];
        position = i + 1;
      }
    }
  }
  // output the largest number and it's position in the array
  cout << endl;
  cout << "The largest number entered was " << largestNum << endl;
  cout << "This number is in the " << position << " position of the array. " << endl;

  // Delete the memory allocated to our dynamic array before exiting your program.
  delete a;

  return 0;
}