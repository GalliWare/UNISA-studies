#include <iostream>
using namespace std;

int main()
{
  // set variables
  float oldPrice, discount, newPrice;

  // set default discount
  discount = 10;

  // get inputs
  cout << "Enter old price: ";
  cin >> oldPrice;
  if (oldPrice >= 200)
  {
    cout << "Enter special discount %: ";
    cin >> discount;
  }

  // calculate new price
  newPrice = oldPrice * (1 - discount / 100);

  // output
  cout << endl;
  cout << "=============" << endl;
  cout << "Was: R" << oldPrice << endl;
  cout << "Discount: " << discount << '%' << endl;
  cout << "Now: R" << newPrice << endl;
  cout << "=============" << endl;
  cout << endl;

  return 0;
}