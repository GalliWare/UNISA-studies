// Processes a banking account and displays a monthly statement
#include <iostream>
#include <string>
using namespace std;

const int MAX_TRANSACTIONS = 100;

const float DEPOSIT_FEE = 1.00,
            WITHDRAWAL_FEE = 1.50,
            OVERDRAWN_FEE = 5.00,
            BALANCE_FEE = 0.50;

struct transaction
{
  string type;
  float value;
  float fees;
};

class BankAccount
{
public:
  void deposit(int inputValue);
  void withdrawal(int value);
  void balanceEnquiry();
  void statement();

private:
  float balance;
  float feeTotal;
  transaction transactions[MAX_TRANSACTIONS];
  int transactionNumber = 0;
};

void BankAccount::deposit(int value)
{
  transactions[transactionNumber].type = "Deposit";
  transactions[transactionNumber].value = value;
  transactionNumber++;
  balance += value;
  transactions[transactionNumber].fees += DEPOSIT_FEE;
  feeTotal += DEPOSIT_FEE;
}

void BankAccount::withdrawal(int value)
{
  transactions[transactionNumber].type = "Withdrawal";
  transactions[transactionNumber].value = value;
  transactionNumber++;
  balance -= value;
  if (balance < 0)
  {
    transactions[transactionNumber].fees += OVERDRAWN_FEE;
    feeTotal += OVERDRAWN_FEE;
  }
  else
  {
    transactions[transactionNumber].fees += WITHDRAWAL_FEE;
    feeTotal += WITHDRAWAL_FEE;
  }
}

void BankAccount::balanceEnquiry()
{
  transactions[transactionNumber].type = "Balance Equiry";
  transactions[transactionNumber].value = balance;
  transactionNumber++;
  transactions[transactionNumber].fees += BALANCE_FEE;
  feeTotal += BALANCE_FEE;
}

void BankAccount::statement()
{
  cout.setf(ios::fixed);
  cout.precision(2);
  cout << "-----------------" << endl;
  cout << "Monthly Statement" << endl;
  cout << "=================" << endl;
  for (int i = 0; i < transactionNumber; i++)
  {
    if (transactions[i].type != "Balance Equiry")
      if (transactions[i].type.size() < 8)
        cout << transactions[i].type << "\t\tR" << transactions[i].value << endl;
      else
        cout << transactions[i].type << "\tR" << transactions[i].value << endl;
    else
      cout << transactions[i].type << endl;
  }
  cout << "=================" << endl;
  cout << "Balance @ End of the Month: R" << balance << endl;
  cout << "=================" << endl;
  cout << "Total fees payable: R" << feeTotal << endl;
}

int main()
{
  char transactionCode;
  float inputValue;
  BankAccount account;
  string inputStore;

  cout << "Enter the transactions for the month" << endl;
  cout << "(B)alance Enquiry, (D)eposits, (W)ithdrawals, E(X)it:" << endl;

  do
  {
    cin >> transactionCode;
    if (transactionCode == 'D')
    {
      cin >> inputValue;
      account.deposit(inputValue);
    }
    else if (transactionCode == 'W')
    {
      cin >> inputValue;
      account.withdrawal(inputValue);
    }
    else if (transactionCode == 'B')
    {
      account.balanceEnquiry();
    }
    else if (transactionCode != 'X')
      cout << transactionCode << " is not a valid code, please use B,D,W or X to exit. " << endl;
  } while (transactionCode != 'X');

  account.statement();

  return 0;
}
