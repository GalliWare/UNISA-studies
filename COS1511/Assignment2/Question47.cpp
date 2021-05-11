#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
  struct personalInfo
  {
    string name;
    int age;
    float height;
    float weight;
  };
  struct commonInfo
  {
    string name;
    int age;
  };
  personalInfo person1, person2;
  commonInfo person3, person4;

  person2 = person1;

  return 0;
}