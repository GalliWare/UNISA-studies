// This program allows a teacher at a School to divide their class by the number of groups they need.
// the class size is hardcoded.
#include <iostream>
using namespace std;

// function to display the output of the program
void displyGroupSizes(int numGroups, int perGroup, int numLeftOver)
{
  cout << "There are " << numGroups << " groups consisting of " << perGroup << " pupils" << endl;
  cout << "There are " << numLeftOver << " remaining pupils" << endl;
}

// function to calculate the number groups, pupils per group and the leftover pupils
void calculateGroupNum(int numPupils, int perGroup, int &nrGroupsP, int &nrLeftP)
{
  nrGroupsP = numPupils / perGroup;
  nrLeftP = numPupils % perGroup;
}

int main()
{
  // set our starting variables
  int nrPupils = 56, nrGroups = 0, nrLeft = 0, groupSize = 0;
  // get the input for how many groups needed.
  cout << "Please enter the size of each group? ";
  cin >> groupSize;

  calculateGroupNum(nrPupils, groupSize, nrGroups, nrLeft);
  displyGroupSizes(nrGroups, groupSize, nrLeft);

  return 0;
}