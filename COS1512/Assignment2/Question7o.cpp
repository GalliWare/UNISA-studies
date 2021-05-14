#include <iostream>
using namespace std;

int main()
{
  int x = 10, y = 20, *p, *q;
  p = &x;
  q = &y;
  *p = 20;
  *q += 10;
  cout << x << " " << y << endl;
  cout << *q << " " << *p << endl;
  *p = *q + 5;
  cout << *p << " " << *q << endl;
  q = p;
  cout << *p << " " << *q << endl;
  return 0;
}