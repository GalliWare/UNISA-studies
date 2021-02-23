#include <iostream>
using namespace std;

void displayCharacter(int numberOfLoops, char displayChar)
{
  for (int i = 0; i < numberOfLoops; i++)
  {
    cout << displayChar;
  }
  cout << endl;
}

int main()
{
  // set variables
  int input, average, averageCounter = 0, inputTotal = 0;
  // starter statement, not to be repeated.
  cout << "Enter the values (negative to end):" << endl;

  do
  {
    // get the users input
    cin >> input;

    // if statement to ignore the negitive input in our display and average calculations
    if (input > 0)
    {
      // output the input value is *
      displayCharacter(input, '*');

      // update average couter that will be used to get average at the end of the program
      averageCounter++;

      // add input to total that we will use to get the average at the end
      inputTotal += input;
    }
  } while (input > 0);

  average = inputTotal / averageCounter;

  cout << "The average is " << average << endl;
  // output the input value is *
  displayCharacter(average, '+');

  return 0;
}