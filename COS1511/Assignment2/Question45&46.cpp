#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct rectangleData
{
  float length;
  float width;
  float area;
  float perimeter;
};

int main()
{
  rectangleData bigRect;
  bigRect.length = 10;
  cin >> bigRect.length;

  return 0;
}
