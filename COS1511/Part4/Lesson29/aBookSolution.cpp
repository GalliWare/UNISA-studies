//Process student assignment marks
#include <iostream>
#include <string>
using namespace std;

const int NUM_MARKS = 4;
struct Student
{
  string name, studNo;
  int marks[NUM_MARKS];
};

void inputData(Student &studentP)
{
  cout << "Enter the student’s information" << endl;
  cout << "Student number: ";
  cin >> studentP.studNo;
  cout << "Name: ";
  cin >> studentP.name;
  cout << "Marks:" << endl;
  for (int i = 0; i < NUM_MARKS; i++)
  {
    cout << "Assignment " << i << ": ";
    cin >> studentP.marks[i];
  }
}

void displayData(const Student &studentP)
{
  cout << "The student’s information:" << endl;
  cout << "Student number: " << studentP.studNo << endl;
  cout << "Name: " << studentP.name << endl;
  cout << "Marks:" << endl;
  for (int i = 0; i < NUM_MARKS; i++)
    cout << " Assignment " << i << ": " << studentP.marks[i] << endl;
}

float average(const Student &studentP)
{
  int total = 0;
  for (int i = 0; i < NUM_MARKS; i++)
    total += studentP.marks[i];
  return float(total) / NUM_MARKS;
}

int main()
{
  const int NUM_STUDS = 10;
  Student students[NUM_STUDS];
  float averages[NUM_STUDS];
  float grandTotal = 0;
  float classAverage;

  //Input data and calculate average for each student
  for (int i = 0; i < NUM_STUDS; i++)
  {
    cout << "Student " << i << endl;
    inputData(students[i]);
    averages[i] = average(students[i]);
    grandTotal += averages[i];
  }

  //Calculate and display class average
  classAverage = grandTotal / NUM_STUDS;
  cout << "The class average is " << classAverage << endl;

  //Display all students who did above average
  cout << endl
       << "These students did above average:" << endl;
  for (int i = 0; i < NUM_STUDS; i++)
    if (averages[i] > classAverage)
      displayData(students[i]);

  return 0;
}