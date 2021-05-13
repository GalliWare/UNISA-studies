#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
  ifstream in;
  ofstream out;
  string subject;
  float contribution1, mark1, contribution2, mark2, yearMark;

  // open our file streams
  in.open("assignments.dat");
  if (in.fail())
  {
    cout << "Error: Input file failed to open. ";
    exit(1);
  }
  out.open("yearmark.dat");
  if (out.fail())
  {
    cout << "Error: Output file failed to open. ";
    exit(1);
  }
  // setup our fixed notation to 2
  out.setf(ios::fixed);
  out.setf(ios::showpoint);
  out.precision(2);

  // use a while loop to run each line
  while (in >> subject >> contribution1 >> mark1 >> contribution2 >> mark2)
  {
    // calculate mark
    yearMark = ((contribution1 * mark1) + (contribution2 * mark2)) / 100;
    // output file data
    out << subject;
    out.width(6);
    out << yearMark << '%' << '\n';
  }

  // close our file streams
  in.close();
  out.close();

  return 0;
}