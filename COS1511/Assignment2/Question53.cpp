#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
  struct supplierType
  {
    string name;
    int supplierID;
  };
  struct applianceType
  {
    supplierType supplier;
    string modelNo;
    float cost;
  };
  applianceType applianceList[25];
  for (int j = 1; j < 25; j++)
    applianceList[j].cost = 0;
  return 0;
}