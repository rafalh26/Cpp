#include "Account.h"
#include <iostream>
using namespace std;

//constr
Account::Account()
{
	owner = "";
	balance = 0;
}
Account::Account(string owner, int balance)
{
	if (this->balance = balance)
	{
		this->balance = balance;
		this->owner = owner;
	}
}
//destr
Account::~Account()
{

}
//setters
int& Account::withdraw()
{
	cout << "How many U want to withdraw?\n";
	cin >> numWithdraw;
	this->balance = balance;
	if ((numWithdraw <= balance) && (numWithdraw>=0))
	{
		balance = balance - numWithdraw;
		return numWithdraw;
	}
	else
	{
		withdraw();
	}
}
int& Account::deposit()
{
	cout << "How many U want to deposit?\n";
	cin >> numDeposit;
	if (numDeposit >= 0)
	{
		balance = balance + numDeposit;
		return numDeposit;
	}
	else
	{
		deposit();
	}
}
//getters
int Account::getBalance() const
{
	return balance;
}
string Account::getOwnerName() const
{
	return owner;
}
