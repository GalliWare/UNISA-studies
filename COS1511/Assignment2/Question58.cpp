#include <iostream>
using namespace std;
int main()
{
  int sales[5] = {10000, 12000, 900, 500, 20000};
  sales[4] = sales[4 - 2];
  cout << sales[4];
}