#include <iostream>
using namespace std;

int main()
{
  int numberOfItems;
  int count; //loop counter for the loop
  int caloriesForItem;
  int totalCalories;

  cout << "How many items did you eat today? ";
  cin >> numberOfItems;
  cout << endl;
  cout << "Enter the number of calories in each of the "
       << numberOfItems << " items eaten: " << endl;

  count = 0;
  totalCalories = 0;
  for (count; count < numberOfItems; count++)
  {
    cout << "> ";
    cin >> caloriesForItem;
    totalCalories += caloriesForItem;
  }

  cout << "Total calories eaten today = " << totalCalories;

  return 0;
}