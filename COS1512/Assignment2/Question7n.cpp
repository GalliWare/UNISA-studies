#include <iostream>
using namespace std;

int main()
{
  double *fPtr1, *fPtr2;
  fPtr1 = new double;
  fPtr2 = fPtr1;
  cout << &fPtr1 << endl;
  cout << fPtr2 << endl;
  delete fPtr1;
  fPtr1 = NULL, fPtr2 = NULL;

  return 0;
}