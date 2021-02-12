#include <iostream>
using namespace std;

int main()
{
  // intialize variables to use, setting values for variables not getting user input so we can begin
  // logic check and not possible create errors checking against a unknown value
  int largest = 0,
      smallest = 1000,
      range,
      currentValue;

  // get the number input from the user
  cout << "Please provide a positive number less then 1000(enter 0 to end program): ";
  cin >> currentValue;

  while (currentValue != 0)
  {
    if (currentValue > 1000)
    {
      cout << "Please enter a number below 1000:";
      cin >> currentValue;
    }
    if (currentValue > largest)
      largest = currentValue;
    if (currentValue < smallest)
      smallest = currentValue;

    cout << "Please provide a positive number less then 1000(enter 0 to end program): ";
    cin >> currentValue;
  }

  range = largest - smallest;
  cout << "Range between smallest number input and largest is: " << range << endl;

  return 0;
}