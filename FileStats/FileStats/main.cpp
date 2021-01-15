#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream fromFile;
	fromFile.open("scores.txt");
	
	int avrg = 0;
	
	score:
	int score = 0;
	fromFile >> score;
	if (score > 0 && score <= 100)
	{	
		avrg = 1;
	}
	else
	{
		score = 0;
	}
 	int min = score;
 	int	max = score;
	double sumOf = score;
	double result = 0;
	
	while (!fromFile.eof())
	{
		fromFile >> score;
		if (score > 0 && score <= 100)
		{
			avrg++;
			sumOf += score;
			if (score > max)
			{
			max = score;
			}

			if (score < min)
			{
			min = score;
			}
		}
		
	}

	result = sumOf / avrg;
	cout << "min is: " << min << endl;
	cout << "max is: " << max << endl;
	cout << "average is: " << result;

	fromFile.close();

	return 0;
}