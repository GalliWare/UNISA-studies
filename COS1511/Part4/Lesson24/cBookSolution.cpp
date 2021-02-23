//Snoepie’s Spaza Shop
#include <iostream>
using namespace std;

void getCode(int &codeP, int maxCode)
{
  cin >> codeP;
  while (codeP < -1 || codeP > maxCode)
  {
    cout << "Invalid code. Please re-enter" << endl;
    cin >> codeP;
  }
}

int main()
{
  const int NUM_ITEMS = 16;
  float prices[] = {4.90, 5.45, 5.45, 7.95, 1.10, 1.10, 1.85, 2.65, 2.65, 2.65, 1.85, 10.35, 4.50, 4.50, 11.25, 6.20};
  int code;
  float total = 0.00;

  cout << "Enter the item codes, -1 to end:" << endl;
  getCode(code, NUM_ITEMS - 1);

  cout.setf(ios::fixed);
  cout.precision(2);
  while (code != -1)
  {
    cout << "\tR" << prices[code] << endl;
    total += prices[code];
    getCode(code, NUM_ITEMS - 1);
  }
  cout << "Total: R" << total << endl;

  return 0;
}