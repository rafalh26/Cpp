#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	int guessNr,userNr = 0;
	int i;
	//random number gen//
	srand(time(nullptr));
	guessNr = rand() % 100 +1;
	//how many guessess
	cout<<guessNr<<endl;

	//to low too high 
	for (i = 0; userNr > guessNr || userNr < guessNr; i++)
	{
		cout << "Enter ur number range from 1-100: " << endl;
		cin >> userNr;
		if (userNr > guessNr)
		{
			cout << "Ur nr is too high " <<endl;
		}
		else if (userNr < guessNr)
		{
			cout << "Ur nr is too low" << endl;
		}
	}
	//end with message in how many guesses
	if (userNr == guessNr)
	{
		cout << "U guessed in " << i << " attempts \n";
	}
	
	


	return 0;
}