#include <iostream>
using namespace std;

int Booksolution()
{
  int length, width, thickness;
  float rate;

  cout << "Enter the length of the envelope: ";
  cin >> length;
  cout << "Enter the width of the envelope: ";
  cin >> width;
  cout << "Enter the thickness of the envelope: ";
  cin >> thickness;

  if (length <= 235 && width <= 120 && thickness <= 5)
    rate = 2.50;
  else if (length <= 250 && width <= 176 && thickness <= 10)
    rate = 5.00;
  else if (length <= 353 && width <= 250 && thickness <= 30)
    rate = 6.25;
  else
    rate = -1;

  if (rate != -1)
    cout << "The postal rate is R" << rate << endl;
  else
    cout << "Too large - regard as parcel" << endl;
  return 0;
}

int main()
{
  // set variables
  int length, width, thickness;

  cout << "Enter the length, width and thickness/depth in that order and in mm dimensions: ";
  cin >> length >> width >> thickness;

  if (length > 235 || width > 120 || thickness > 5)
  {
    if (length > 250 || width > 176 || thickness > 10)
    {
      if (length > 353 || width > 250 || thickness > 30)
      {
        cout << "This letter must be regarded as a parcel.";
      }
      else
      {
        cout << "Postal rate will be R6.25";
      }
    }
    else
    {
      cout << "Postal rate will be R5.00";
    }
  }
  else
  {
    cout << "Postal rate will be R2.50";
  }

  return 0;
}