#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
public:
	//const
	Circle();
	Circle(double radius);
	//killer
	~Circle();

	//setters
	void setRadius(double& radius);
	//getters
	double getRadius();
	double circumference();
	double area();
private:
	const double numberPi = 3.14159265359;
	double radius = 0;
};

#endif // !CIRCLE_H

