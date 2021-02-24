#include <iostream>
using namespace std;

const int NUMBER_CARS = 5, NUMBER_SPEEDS = 6;

void inputAndCalcStock(int resultsP[][NUMBER_SPEEDS], string carsP[], string speedsP[])
{
  for (int i = 0; i < NUMBER_CARS; i++)
  {
    cout << "Enter results for Car " << carsP[i] << ":" << endl;
    for (int j = 0; j < NUMBER_SPEEDS; j++)
    {
      cout << "Enter decibles for speed " << speedsP[j] << ": ";
      cin >> resultsP[i][j];
    }
  }
}

void diplayTable(int resultsP[][NUMBER_SPEEDS], string carsP[], string speedsP[])
{
  for (int i = 0; i < NUMBER_SPEEDS; i++)
  {
    cout << "\t" << speedsP[i];
  }
  cout << endl;

  for (int i = 0; i < NUMBER_CARS; i++)
  {
    cout << carsP[i];
    for (int j = 0; j < NUMBER_SPEEDS; j++)
    {
      cout << "\t" << resultsP[i][j];
    }
    cout << endl;
  }
}

int main()
{
  int results[NUMBER_CARS][NUMBER_SPEEDS];
  string cars[NUMBER_CARS] = {"Car 1", "Car 2", "Car 3", "Car 4", "Car 5"},
         speeds[NUMBER_SPEEDS] = {"20km/h", "40km/h", "60km/h", "80km/h", "100km/h", "120km/h"};

  inputAndCalcStock(results, cars, speeds);
  diplayTable(results, cars, speeds);

  return 0;
}