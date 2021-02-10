// output price and vat of three products inputed
#include <iostream>
using namespace std;

int main()
{
  const float VAT_RATE = 1.14;
  float price1, price2, price3;
  cout << "Please enter three products prices: ";
  cin >> price1 >> price2 >> price3;
  float totalPrice = (price1 + price2 + price3) * VAT_RATE;
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << "The total price is: R " << totalPrice;
  return 0;
}
