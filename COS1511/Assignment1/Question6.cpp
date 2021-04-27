#include <iostream>
using namespace std;

// function to calculate how much of a discount is add based on type of customer
void calculateDiscount(char typeOfCustomer, float total, float &finalAmountP)
{
  float discount = 0;
  if (typeOfCustomer == 'D')
  {
    discount = 0.88;
    finalAmountP = total * discount;
  }
  else if (typeOfCustomer == 'P')
  {
    discount = 0.85;
    finalAmountP = total * discount;
  }
  else if (typeOfCustomer == 'S')
  {
    discount = 0.90;
    finalAmountP = total * discount;
  }
  else if (typeOfCustomer == 'O')
  {
    if (total > 200)
    {
      discount = 0.90;
      finalAmountP = total * discount;
    }
    else
      finalAmountP = total;
  }
  else
  {
    finalAmountP = total;
  }
}

// function to get each items amount and add to a total
void getAmount(float &amountP)
{
  float item;

  cout << "Enter item amounts:" << endl;
  cout << "Enter 0 once all items added." << endl;
  do
  {
    cout << "> ";
    cin >> item;
    amountP += item;
  } while (item != 0);

  cout << endl;
}

// function to get the type of custom we are processing
void getCustomType(char &customerTypeP)
{
  cout << "Please input customer details. " << endl;
  cout << "(D)ealer, (P)ensioner, (S)tudent or (O)ther: ";
  do
  {
    cin >> customerTypeP;
  } while (customerTypeP != 'D' && customerTypeP != 'P' && customerTypeP != 'O' && customerTypeP != 'S');
  cout << endl;
}

int main()
{
  float amount, finalAmount;
  char customerType;

  getCustomType(customerType);

  getAmount(amount);

  calculateDiscount(customerType, amount, finalAmount);

  cout << "That will be R" << finalAmount << ", thank you for shopping with us." << endl;

  return 0;
}