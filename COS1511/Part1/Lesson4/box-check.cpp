// exercise 4.2, check how many boxes needed for items and left over items
#include <iostream>

using namespace std;

int main()
{
  int boxSize, items, boxsNeeded, itemsLeft;
  cout << "Enter how many items fit in a box: ";
  cin >> boxSize;
  cout << "Enter number of items: ";
  cin >> items;
  boxsNeeded = items / boxSize;
  itemsLeft = items % boxSize;
  cout << "Total boxes needed: "<< boxsNeeded<< endl; 
  cout << "Items left: "<< itemsLeft << endl;
  return 0;
}
