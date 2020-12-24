#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
using namespace std;
class Account 
{
public:
	//constr
	Account();
	Account(string owner, int balance);
	//destr
	~Account();
	//setters
	int& withdraw();
	int& deposit();
	//getters
	int getBalance() const;
	string getOwnerName() const;
private:
	string owner ="";
	int balance = 0;
	int numWithdraw;
	int numDeposit;
};



#endif