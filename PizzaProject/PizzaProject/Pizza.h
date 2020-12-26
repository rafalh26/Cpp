#ifndef PIZZA_H
#define PIZZA_H

#include <vector>
#include <string>

using namespace std;

class Pizza {
public:
	//constr
	Pizza(string name, int diameter,int cost);
	//destr
	//setters
	void addTopping();
	//getters
	int getSize() const;
	string getName() const;
	int getCost() const;
	void printToppings();
	~Pizza();
private:
	string name = "";
	int cost = 0;
	int diameter = 0;
	vector<string> topping;
};

#endif // !PIZZA_H
