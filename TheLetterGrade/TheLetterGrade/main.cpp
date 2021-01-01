#include <iostream>
#include <stdexcept>

char getLetterGrade(int grade);


int main()
{
	int input = 0;
	char result = 'x';

	try
	{
		std::cout << "Enter score:\n";
		std::cin >> input;
		result = getLetterGrade(input);
		std::cout << result << std::endl;
	}
	catch (const std::out_of_range& err)
	{
		std::cout<<err.what()<<std::endl;
	}


	return 0;
}

char getLetterGrade(int grade)
{
	char result ='x';

	if (grade < 0 || grade >100)
	{
	throw std::out_of_range("can't pass negative or above 100\n");
	}
	else if (grade >= 0 && grade <= 59)
	{
		result = 'F';
	}
	else if (grade >= 60 && grade <= 69)
	{
		result = 'D';
	}
	else if (grade >= 70 && grade <= 79)
	{
		result = 'C';
	}
	else if (grade >= 80 && grade <= 89)
	{
		result = 'B';
	}
	else if (grade >= 90 && grade <= 100)
	{
		result = 'A';
	}
	
	return result;
}