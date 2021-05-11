#include <iostream>
#include <string.h>
using namespace std;
struct ShoeType
{
  string style;
  float price;
};

int main()
{
  ShoeType shoe1, shoe2;
  shoe1.style = "Adidas";
  shoe1.price = 9.99;
  cout << shoe1.style << " R " << shoe1.price;
  shoe2 = shoe1;
  shoe2.price = shoe2.price / 9;
  cout << shoe2.style << " R " << shoe2.price;
  return 0;
}