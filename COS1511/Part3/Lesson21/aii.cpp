// compute the average of 3 marks for 2 students and display the better average
// my code with the addition of the reference so input can be turned into a function.
#include <iostream>
using namespace std;

float averageMark(float mark1, float mark2, float mark3)
{
  float average = 0, divider = 3;
  average = (mark1 + mark2 + mark3) / divider;
  return average;
}

void inputMark(float &m1P, float &m2P, float &m3P)
{
  cout << "Enter the 3 marks: ";
  cin >> m1P >> m2P >> m3P;
}

int main()
{
  float student1Average, student2Average, m1, m2, m3;

  inputMark(m1, m2, m3);

  student1Average = averageMark(m1, m2, m3);

  inputMark(m1, m2, m3);

  student2Average = averageMark(m1, m2, m3);

  if (student1Average > student2Average)
    cout << "The first student has the higher average" << endl;
  else
    cout << "The second student has the higher average" << endl;

  return 0;
}
