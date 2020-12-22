#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:

	//constructors
	Rectangle();
	Rectangle(double length, double width);
	//getters
	double getLength() const;
	double getWidth() const;
	double area() const;
	double perimeter() const;

	//setters
	void setLength(double length);
	void setWidth(double width);
private:
	double length;
	double width;
};










#endif // !RECTANGLE_
