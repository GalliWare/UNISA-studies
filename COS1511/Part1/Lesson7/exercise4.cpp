#include <iostream>
using namespace std;

int main()
{
  // set variables
  string name, name2, color, number, noun, adjective, line1, line2, line3;

  // get inputs
  cout << "Enter a person's name: ";
  cin >> name;
  cout << "Enter another person's name: ";
  cin >> name2;
  cout << "Enter a color: ";
  cin >> color;
  cout << "Enter a number: ";
  cin >> number;
  cout << "Enter a noun: ";
  cin >> noun;
  cout << "Enter an adjective: ";
  cin >> adjective;

  line1 = name + ":\t\"Couldn't you see that the traffic light was " + color + "?";
  line2 = name2 + ":\t\"But I had " + number + " people and a " + noun + " in the car with me.";
  line3 = name + ":\t\"That is so " + adjective + "! You could have had them all killed.";

  // Output of Dialogue:
  cout << endl;
  cout << "Dialogue" << endl;
  cout << "========" << endl;
  cout << line1 << endl;
  cout << line2 << endl;
  cout << line3 << endl;

  return 0;
}