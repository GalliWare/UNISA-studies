#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
  ifstream in;
  ofstream out;
  string inName, outName;
  char input, answer = 'n';

  // get user input
  do
  {
    cout << "Enter the input file name: ";
    cin >> inName;
    cout << "Your entered file name: " << inName << endl;
    cout << "Is that correct? (y/n): ";
    cin >> answer;
  } while ((answer != 'Y') && (answer != 'y'));
  // reset answer
  answer = 'n';
  cout << endl;
  do
  {
    cout << "Enter the output file name: ";
    cin >> outName;
    cout << "Your entered file name: " << outName << endl;
    cout << "Is that correct? (y/n): ";
    cin >> answer;
  } while ((answer != 'Y') && (answer != 'y'));

  // validate the input

  // open our file streams
  in.open(inName);
  if (in.fail())
  {
    cout << "Error: Input file failed to open. ";
    exit(1);
  }
  out.open(outName);
  if (out.fail())
  {
    cout << "Error: Output file failed to open. ";
    exit(1);
  }

  // use a while loop to check each character
  do
  {
    in.get(input);
    // switch logic to change the numbers into the correct characters
    switch (input)
    {
    case '0':
      out.put('s');
      break;
    case '1':
      out.put('g');
      break;
    case '2':
      out.put('o');
      break;
    case '3':
      out.put('y');
      break;
    case '4':
      out.put('v');
      break;
    case '5':
      out.put('n');
      break;
    case '6':
      out.put('f');
      break;
    case '7':
      out.put('j');
      break;

    default:
      out.put(input);
      break;
    }
  } while (!in.eof());

  // close our file streams
  in.close();
  out.close();

  return 0;
}