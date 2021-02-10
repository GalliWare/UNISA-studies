#include <iostream>
using namespace std;

int main()
{
  // set variables
  float kilometres, litres, kilometresPerLitre, litresPer100Kilometres;

  // get kilometres
  cout << "Please provide kilometres covered: ";
  cin >> kilometres;

  // get litres
  cout << "Please provide litres used: ";
  cin >> litres;

  // calculate output values
  kilometresPerLitre = kilometres / litres;
  litresPer100Kilometres = litres / kilometres * 100;

  // Output of results
  cout << "kms\tlitres\tkm/l\tl/100km" << endl;
  cout << kilometres << '\t' << litres << '\t';
  cout << kilometresPerLitre << '\t' << litresPer100Kilometres;

  return 0;
}