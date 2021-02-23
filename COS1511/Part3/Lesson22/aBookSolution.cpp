//Calculates total value of stock
#include <iostream>
#include <string>
using namespace std;

//Display the name and price of an item, input the stock,
//calculate the stock value and add it to the total
void inputAndCalc(string nameP, float priceP, float &stockTotalP)
{
  int stock;
  float stockVal;
  cout << nameP << ": R" << priceP << endl;
  cout << "Stock: ";
  cin >> stock;
  stockVal = priceP * stock;
  stockTotalP += stockVal;
}

int main()
{
  float stockTotal = 0;

  cout << "Enter the stock of each item" << endl;
  inputAndCalc("Plain candles", 8.00, stockTotal);
  inputAndCalc("Scented candles", 10.00, stockTotal);
  inputAndCalc("Dream-catchers", 19.00, stockTotal);
  inputAndCalc("Bead place mats", 11.50, stockTotal);
  inputAndCalc("Bead coasters", 5.00, stockTotal);
  inputAndCalc("Incense holders", 6.40, stockTotal);
  inputAndCalc("Hand-painted Ms", 23.50, stockTotal);

  cout << "Total value of the stock is R" << stockTotal << endl;

  return 0;
}