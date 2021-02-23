// compute the average of 3 marks for 2 students and display the better average
// aiv move the display into a function to make main cleaner.
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

void displayBest(float average1, float average2)
{
  cout.setf(ios::fixed);
  cout.precision(2);

  float best = average2;
  if (average1 > average2)
    best = average1;
  cout << "The best average is " << best << endl;
}

int main()
{
  float student1Average, student2Average, m1, m2, m3;

  inputMark(m1, m2, m3);
  calcAverageMark(m1, m2, m3, student1Average);

  inputMark(m1, m2, m3);
  calcAverageMark(m1, m2, m3, student2Average);

  displayBest(student1Average, student2Average);

  return 0;
}
