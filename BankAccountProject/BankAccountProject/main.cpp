#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

Account setAccount();

int main()
{
	int numWithdraw = 0;
	Account account1 = setAccount();
	cout<<account1.getOwnerName()<<" have: "<<account1.getBalance()<<" $";
	//user of acc1 req withdraw of x $
	account1.withdraw();
	cout << "current balance is: " << account1.getBalance() << endl;
	//user req deposit
	account1.deposit();
	cout << "current balance is: " << account1.getBalance() << endl;

	return 0;
}

Account setAccount()
{
	string name = "";
	int balance = 0;

	cout << "Set Ur account\n"<<"Enter Ur name: \n";
	getline(cin, name);
	do
	{
		cout << "How much U want start Ur account with (initial balance)\n";
		cin >> balance;
	} while (balance < 0);
	Account account1(name,balance);
	return account1;
}