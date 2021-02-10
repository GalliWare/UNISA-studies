// adds to periods of time together
#include <iostream>

using namespace std;

int main()
{
  int min1, min2, sec1, sec2;
  cout << "Enter first tracks time in minutes and seconds: ";
  cin >> min1 >> sec1;
  cout << "Enter second tracks time in minutes and seconds: ";
  cin >> min2 >> sec2;
  const int totalInSeconds = (60 * min1) + sec1 + (60 * min2) + sec2; 
  const int minutes = totalInSeconds/60;
  const int seconds = totalInSeconds%60;
  cout << "Total track time is "<< minutes<<" minutes and "<< seconds<<" seconds." << endl;
  return 0;
}
