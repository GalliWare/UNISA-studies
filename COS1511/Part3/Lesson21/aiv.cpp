// compute the average of 3 marks for 2 students and display the better average
// aiii code with the average function changed to a reference void function
//
#include <iostream>
using namespace std;

void calcAverageMark(float &m1P, float &m2P, float &m3P, float &averageP)
{
  averageP = (m1P + m2P + m3P) / 3;
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
  calcAverageMark(m1, m2, m3, student1Average);

  inputMark(m1, m2, m3);
  calcAverageMark(m1, m2, m3, student2Average);

  if (student1Average > student2Average)
    cout << "The first student has the higher average" << endl;
  else
    cout << "The second student has the higher average" << endl;

  return 0;
}
