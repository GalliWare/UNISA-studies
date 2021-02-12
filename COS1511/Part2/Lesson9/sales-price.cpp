// output price and vat of three products inputed
#include <iostream>
using namespace std;

int main()
{
  // set constant variable
  const float VAT_RATE = 1.14;
  // set non constant variable
  float price, totalPrice;

  // intialize price
  cout << "Please enter product prices(enter 0 to finish): " << endl;
  cin >> price;
  totalPrice = (price * VAT_RATE);

  // loop while the price is not 0 or below. Can also use != as the book shows
  while (price > 0)
  {
    cout << "Please enter product prices(enter 0 to finish): " << endl;
    cin >> price;
    totalPrice += (price * VAT_RATE);
  }

  cout.setf(ios::fixed);
  cout.precision(2);
  cout << "The total price is: R " << totalPrice << endl;
  return 0;
}
