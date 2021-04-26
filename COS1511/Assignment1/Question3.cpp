#include <iostream>
using namespace std;

int main()
{
  float var1, var2, answer;
  char operation;
  bool error;

  cout << "Please enter the first float value:  ";
  cin >> var1;
  cout << "Please enter the second float value:  ";
  cin >> var2;
  // used to break up the output to be easier to read
  cout << endl
       << "Operation options are +, -, *, / or %" << endl;
  cout << "Please enter the operation required: ";
  cin >> operation;
  cout << endl;

  // set a possible error value
  // for if someone passes a 0 to the second value and selects divide
  // or they pass something other then our expected symbols
  error = false;
  if (operation == '+')
    answer = var1 + var2;
  else if (operation == '-')
    answer = var1 - var2;
  else if (operation == '*')
    answer = var1 * var2;
  else if (operation == '/')
  {
    if (var2 == 0)
      error = true;
    else
      answer = var1 / var2;
  }
  else if (operation == '%')
  {
    if (var2 == 0)
      error = true;
    else
    {
      answer = var1;
      while (answer > var2)
      {
        answer = answer - var2;
      };
    }
  }
  else
    error = true;

  cout.setf(ios::fixed);
  cout.precision(2);

  // if we have a error from the divide, modulus or generally incorrect operation
  if (!error)
    cout
        << "The sum of " << var1 << " and " << var2 << " is " << answer << endl;
  else
  {
    if (!var2)
      cout << "Cannot have second value = " << var2 << " and use operation " << operation << endl;
    else
      cout << "Illegal operation" << endl;
  }

  return 0;
}