#include <iostream>
using namespace std;

void inputAndCalcStock(string item, float value, float &totalP, int &stockP)
{
  int stock;
  cout.setf(ios::fixed);
  cout.precision(2);

  cout << item << ": R" << value << endl;
  cout << "Stock: ";
  cin >> stock;

  stockP = stock;
  totalP += stock * value;
}

void displayTable(string itemDisplay[], float valueDisplay[], float totalDisplay, int stockDisplay[], int counter)
{
  float stockTotalValue = 0, grandTotal = 0;

  cout << "Item Name:\tPrice:\tStock:\tTotal Value:" << endl;

  for (int i = 0; i < counter; i++)
  {
    stockTotalValue = valueDisplay[i] * stockDisplay[i];
    grandTotal += stockTotalValue;

    cout << itemDisplay[i] << "\t";
    cout << "R" << valueDisplay[i] << "\t";
    cout << stockDisplay[i] << "\t";
    cout << "R" << stockTotalValue << endl;
  }

  cout << "\t\tGrand Total:\tR" << grandTotal << endl;
}

int main()
{
  int itemTotalCount = 7;
  int stock[itemTotalCount];
  string items[itemTotalCount] = {
      "Plain candles", "Scented candles", "Dream-catchers", "Bead place mats",
      "Bead coasters", "Incense holders", "Hand-painted Ms"};
  float value[itemTotalCount] = {8.00, 10.00, 19.00, 11.50, 5.00, 6.40, 23.50}, total = 0;

  cout << "Enter the stock levels of each item: " << endl;

  for (int i = 0; i < itemTotalCount; i++)
  {
    inputAndCalcStock(items[i], value[i], total, stock[i]);
  }

  displayTable(items, value, total, stock, itemTotalCount);

  return 0;
}