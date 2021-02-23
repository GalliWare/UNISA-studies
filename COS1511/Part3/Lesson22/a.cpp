#include <iostream>
using namespace std;

void inputAndCalcStock(string &item, float &value, float &totalP)
{
  int stock;
  cout.setf(ios::fixed);
  cout.precision(2);

  cout << item << ": R" << value << endl;
  cout << "Stock: ";
  cin >> stock;

  totalP += stock * value;
}

void displayTotalValue(float &totalP)
{
  cout << "Total value of the stock is R" << totalP << endl;
}

int main()
{
  int itemTotalCount = 3;
  int stock[itemTotalCount];
  string items[itemTotalCount];
  float value[itemTotalCount], total = 0;

  items[0] = "Plain candles";
  items[1] = "Scented candles";
  items[2] = "Hand-painted candles";

  value[0] = 8.00;
  value[1] = 10.00;
  value[2] = 23.50;

  cout << "Enter the stock levels of each item: " << endl;

  for (int i = 0; i < itemTotalCount; i++)
  {
    inputAndCalcStock(items[i], value[i], total);
  }

  displayTotalValue(total);

  return 0;
}