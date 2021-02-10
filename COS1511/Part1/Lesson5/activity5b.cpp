// Write a program to input a number from the keyboard. 
// The program must then multiply the number by 2 and display the result. 
// There are two restrictions on your program, however: 
//   (i) The program may only use one variable. 
//   (ii) The program may not include an expression (i.e. with calculations) in a cout statement.

#include <iostream> 
using namespace std; 

int main( ) 
{ 
  int oneVariable;
  cout << "Please provide a number: ";  
  cin >> oneVariable;
  oneVariable *= 2;
  cout << "Your number double is "<< oneVariable << endl; 
  
  return 0; 
}