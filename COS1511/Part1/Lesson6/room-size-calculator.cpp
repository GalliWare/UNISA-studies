// Calculate the size of a room and provide the size and cost of carpetting
#include <iostream>
using namespace std;

int main()
{
  // set variables to be used
  float width, length, carpetCost, sizeOfRoom, costToCarpet;

  // setup output for cout floats
  cout.setf(ios::fixed);
  cout.precision(2);

  // get room width and length
  cout << "Please enter width of room then length: ";
  cin >> width >> length;

  // get the carpet pre meter cost
  cout << "Please provide the cost of the carpet per meter: ";
  cin >> carpetCost;

  // calculate size of room
  sizeOfRoom = width * length;

  // calculate cost of carpetting the room
  costToCarpet = sizeOfRoom * carpetCost;

  // output the size of the room
  cout << "The size of the room is " << sizeOfRoom << " square meters";

  // output the cost to carpet the room
  cout << "It will cost you R " << costToCarpet << " to carpet this room";

  // exit with 0 code to show no errors
  return 0;
}