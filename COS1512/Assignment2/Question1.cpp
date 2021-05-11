#include <iostream>
#include <cmath>
using namespace std;

void calcDogsAge(float dogAge)
{
  float humanAge = 16 * log(dogAge) + 31;
  cout << "Human Age by new method: " << humanAge << endl;
}

void calcDogsAge(int dogAge, int multiplier)
{
  int humanAge = dogAge * multiplier;
  cout << "Human Age by old method: " << humanAge << endl;
}

int main()
{
  float dogAge;

  cout << "Please input your dogs age: ";
  cin >> dogAge;

  calcDogsAge(dogAge);
  calcDogsAge(dogAge, 7);

  return 0;
}