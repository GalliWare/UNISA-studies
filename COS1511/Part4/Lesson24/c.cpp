#include <iostream>
using namespace std;

int main()
{
  int itemTotalCount = 13, code;
  float value[itemTotalCount], total = 0;

  value[0] = 8.00;
  value[1] = 10.00;
  value[2] = 12.00;
  value[3] = 1.50;
  value[4] = 5.50;
  value[5] = 8.50;
  value[6] = 7.99;
  value[7] = 2.65;
  value[8] = 0.99;
  value[9] = 3.50;
  value[10] = 2.50;
  value[11] = 4.90;
  value[12] = 4.90;

  cout << "Enter the item codes, ranged between 0-12 any -1 to end for total: " << endl;
  while (code != -1)
  {
    cin >> code;
    if (code != -1)
    {
      cout << "R" << value[code] << endl;
      total += value[code];
    }
  }

  cout << "Total: R" << total;

  return 0;
}