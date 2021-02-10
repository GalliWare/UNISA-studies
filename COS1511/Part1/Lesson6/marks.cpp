// take marks and output average, trying with array
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int mark1, mark2, mark3;
  float average;

  //Input the three marks
  cout << "Enter the values of three marks: ";
  cin >> mark1 >> mark2 >> mark3;

  //Calculate the sum and average
  average = float(mark1 + mark2 + mark3) / 3;
  cout << "The average is " << average << endl;
  return 0;
}