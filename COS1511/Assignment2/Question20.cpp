#include <iostream>
using namespace std;
int main()
{
  int alpha[5];
  int j;
  for (j = 0; j < 5; j++)
    alpha[j] = 2 * j + 1;
  cout << alpha[2] << endl;
}
