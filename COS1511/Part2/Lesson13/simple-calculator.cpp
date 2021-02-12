#include <iostream>
using namespace std;

int BookSolution()
{
  float value1, value2, answer;
  char operation;
  bool error;

  //Input two values and the type of operation
  cout << "Enter the first value: ";
  cin >> value1;
  cout << "Enter the second value: ";
  cin >> value2;
  cout << endl
       << "Which operation should be performed?" << endl;
  cout << "(A)ddition" << endl;
  cout << "(S)ubtraction" << endl;
  cout << "(M)ultiplication" << endl;
  cout << "(D)ivision" << endl;
  cout << "Type the first letter of the one you choose: ";
  cin >> operation;

  //Do appropriate calculation
  error = false;
  switch (operation)
  {
  case 'a':
  case 'A':
    answer = value1 + value2;
    break;
  case 's':
  case 'S':
    answer = value1 - value2;
    break;
  case 'm':
  case 'M':
    answer = value1 * value2;
    break;
  case 'd':
  case 'D':
    if (value2 == 0)
      error = true;
    else
      answer = value1 / value2;
    break;
  default:
    error = true;
  }

  //Output result
  if (!error)
    cout << "The answer is " << answer << endl;
  else
    cout << "Illegal operation" << endl;

  return 0;
}

int main()
{
  float num1, num2, answer;
  char operation;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  cout << "Select operation, A for addition, S for subtraction, M for multiplication, D for division: ";
  cin >> operation;

  switch (operation)
  {
  case 'M':
    answer = num1 * num2;
    break;

  case 'D':
    if (num2 == 0)
      cout << "Cannot divide by 0" << endl;
    else
      answer = num1 / num2;
    break;

  case 'A':
    answer = num1 + num2;
    break;

  case 'S':
    answer = num1 - num2;
    break;

  default:
    cout << "No valid operation selected " << operation << " not a valid option, only M, D, A or S" << endl;
    answer = 0;
    break;
  }

  cout << "Your answer is: " << answer;

  return 0;
}