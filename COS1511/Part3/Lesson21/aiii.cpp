// compute the average of 3 marks for 2 students and display the better average
// additions on top of aii of the averageMark beening a reference function
//
#include <iostream>
using namespace std;

float averageMark(float &m1P, float &m2P, float &m3P)
{
  // simplified as it was in the book
  return (m1P + m2P + m3P) / 3;
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
