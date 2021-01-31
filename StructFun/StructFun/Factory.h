#ifndef FACTORY_H
#define FACTORY_H
#include <string>

using namespace std;

class Factory 
{
public:
struct product
	{
		int weight = 0;
		string name = "";
	};
	
product& getData(product& newItem);

};

#endif // !FACTORY_H
