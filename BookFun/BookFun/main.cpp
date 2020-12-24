#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

int main()
{
	Book book1("casper ", "Ghost Casper - Autobiography ", "fantasy ", 780);
	cout << book1.getData();

	return 0;
}  