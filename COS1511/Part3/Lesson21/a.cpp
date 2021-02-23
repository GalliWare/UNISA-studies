// compute the average of 3 marks for 2 students and display the better average
#include <iostream>
using namespace std;

float averageMark(float mark1, float mark2, float mark3)
{
  float average = 0, divider = 3;
  average = (mark1 + mark2 + mark3) / divider;
  return average;
}

int main()
{
  float student1Average, student2Average, m1, m2, m3;

  cout << "Enter the first students marks:";
  cin >> m1 >> m2 >> m3;

  student1Average = averageMark(m1, m2, m3);

  cout << "Enter the second students marks:";
  cin >> m1 >> m2 >> m3;

  student2Average = averageMark(m1, m2, m3);

  if (student1Average > student2Average)
    cout << "The first student hadd the higher average" << endl;
  else
    cout << "The second student hadd the higher average" << endl;

  return 0;
}
