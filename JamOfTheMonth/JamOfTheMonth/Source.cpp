#include <iostream>
using std::cout;
using std::cin;
using std::endl;





int main()
{
	char package;
	int jars;

start:
	cout << "Whats ur Package U own: \n";
	cin >> package;

	
	
	switch (package)
	{
	case'a':
	case'A':
		cout << "How many jars U got this month in total?: " << endl;
		cin >> jars;
		if (jars<=2 && jars >= 0)
		{
			cout << "U owe: " << "8" << " dollars" << endl;
		}
		else if (jars > 2)
		{
			jars = 8 + (jars -2) * 5;
			cout << "U owe: " << jars << " dollars" << endl;
		}
		else
		{
			cout << "error nr: swtA";
			goto start;
		}
		break;
	case'b':
	case'B':
		cout << "How many jars U got this month in total?: " << endl;
		cin >> jars;
		if (jars <= 4 && jars >=0)
		{
			cout << "U owe: " << "12" << " dollars" << endl;
		}
		else if (jars > 4)
		{
			jars = 12 + (jars - 4)* 4;
			cout << "U owe: " << jars << " dollars" << endl;
		}
		else
		{
			cout << "error nr: swtB";
			goto start;
		}
		break;
	case'c':
	case'C':
		cout << "How many jars U got this month in total?: " << endl;
		cin >> jars;
		if (jars <= 6 && jars >=0)
		{
			cout << "U owe: " << "15" << " dollars" << endl;
		}
		else if (jars > 6)
		{
			jars = 15 + (jars -6) * 3;
			cout << "U owe: " << jars << " dollars" << endl;
		}
		else
		{
			cout << "error nr: swtC";
			goto start;
		}
		break;
	default:
		cout << "Wrong Package - ERROR! \n";
		goto start;
	}
	return 0;
}