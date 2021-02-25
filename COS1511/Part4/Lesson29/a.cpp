// student information and grading program

#include <iostream>
using namespace std;

// set the max number of assignments we can store in marks array
// set the number of students for the main, we could do this in the main or we could ask the user for this and
// store it to have the program much for flexible
const int MAX_ASSIGNMENTS = 4, NUMBER_OF_STUDENTS = 10;

// create the struct to be used for each student
struct Student
{
  string name;
  int studentID;
  float marks[MAX_ASSIGNMENTS], average;
};

// function to process the input data into the array of Student struct
void inputData(Student studentDataP[])
{
  int assignment;
  for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
  {
    assignment = 1;
    cout << "Enter Student Name: ";
    getline(cin, studentDataP[i].name, '\n');

    cout << "Enter Student Number: ";
    cin >> studentDataP[i].studentID;

    cout << "Enter Students marks:" << endl;
    for (int j = 0; j < MAX_ASSIGNMENTS; j++)
    {
      cout << "Assignment " << assignment << ": ";
      cin >> studentDataP[i].marks[j];
      assignment++;
    }
    cin.get();
  }
}

// function to calculate the average for the students and store in the Students Struct and calculate the overall average of all the marks
void calcAverage(Student studentDataP[], int &averageP)
{
  int totalMarks = 0, totalAssignments = 0, studentTotal;

  for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
  {
    studentTotal = 0;

    for (int j = 0; j < MAX_ASSIGNMENTS; j++)
    {
      studentTotal += studentDataP[i].marks[j];
      totalMarks += studentDataP[i].marks[j];
      totalAssignments++;
    }

    studentDataP[i].average = studentTotal / MAX_ASSIGNMENTS;
  }

  averageP = totalMarks / totalAssignments;
}

// function to display the above average students
void displayAboveAverage(Student studentDataP[], int averageP)
{
  cout << "Students with above average marks:" << endl;
  cout << "----------------------------------" << endl;
  for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
  {
    if (studentDataP[i].average > averageP)
    {
      cout << "Name:\t\t\t" << studentDataP[i].name << endl;
      cout << "Student Number:\t\t" << studentDataP[i].studentID << endl;
      cout << "Students Average:\t" << studentDataP[i].average << endl;
    }
  }
}

// main function to run
int main()
{
  Student studentData[NUMBER_OF_STUDENTS];
  int average = 0;

  inputData(studentData);
  calcAverage(studentData, average);
  displayAboveAverage(studentData, average);

  return 0;
}