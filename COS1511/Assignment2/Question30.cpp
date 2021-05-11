#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int matrix[3][2];
  int j, k;
  for (j = 0; j < 3; j++)
    for (k = 0; k < 2; k++)
      matrix[j][k] = j + k;

  for (j = 0; j < 3; j++)
  {
    for (k = 0; k < 2; k++)
      cout << matrix[j][k];
    cout << endl;
  }

  return 0;
}
