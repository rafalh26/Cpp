#include<iostream>

using namespace std;

int main()
{
	enum DIRECTIONS { UP,DOWN,LEFT,RIGHT,STAND };
	DIRECTIONS myDirecion = LEFT;
	switch (myDirecion)
	{
	case UP:
		cout << "UP!";
		break;
	case DOWN:
		cout << "DOWN";
		break;
	case LEFT:
		cout << "LEFT";
		break;
	case RIGHT:
		cout << "RIGHT";
		break;
	case STAND:
		cout << "HOLD ON";
		break;
	}
	cout << endl;

	cout << myDirecion << endl;


	return 0;
}