#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
  string str = "Blue Sky";
  str.replace(0, 2, "");
  cout << str << endl;
  return 0;
}
