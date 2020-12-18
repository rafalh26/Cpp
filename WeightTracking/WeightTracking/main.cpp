#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> names;
	vector<string> weight;
	string name, weightI;

	/* Pre Entry */
	cout << "Enter Person's name:" << endl;
	getline(cin, name);

	if (name != "exit")
	{
		cout << "Enter Person's weight:" << endl;
		getline(cin, weightI);
	}
	
	


	while (name!="exit")
	{
		names.push_back(name);
		weight.push_back(weightI);
		
		cout << "Enter Person's name: "<<endl;
		getline(cin, name);
		if (name != "exit")
		{
		cout << "Enter Person's weight: " << endl;
		getline(cin, weightI);
		}
	}

	for (int x = 0; x< names.size(); x++)
	{
		cout << names.at(x) << " weight: " << weight.at(x)<<endl;
	}

	
	return 0;
}