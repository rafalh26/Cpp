#include <iostream>
#include <array>
#include <string>
using namespace std;

int gameGridArray[3][3];
char showGridArray[3][3];

void welcome();
bool ifXWin(); //need to know whos winner
bool ifOWin();
bool ifCatsGame(); // noone wins so only matter to check if status occured
void turnOfO();
void turnOfX();
void showGrid(); //must import gameGridArray


int main()
{
	/*Full game idea
	* put all in functions to check all conditions then at the end show grid
	* if wictory then special cout communicate as well
	*
	* order to check
	*
	* welcoming function - just welcome message and basic explanations;
	* do while if win is false
	* do while if catsPlay is false
	*
	* show grid
	* show whos turn message and how to make input
	*	also check if field alredy taken or not
	*	also check if grid is not full yet
	*	check in end of turn if victory occured
	* show grid again;
	2nd player turn
	* 	also check if field alredy taken or not
	*	also check if grid is not full yet
	*	check in end of turn if victory occured
	* show grid again;
	*/
	// Here it comes the Engine Loop //
	welcome(); // also populate gameGridArray with 0;
	showGrid();
	
	do
	{
		turnOfX();
		if ((ifXWin() == 1) || (ifOWin() == 1) || (ifCatsGame() == 1))
		{
			break;
		}
		turnOfO();
		if ((ifXWin() == 1) || (ifOWin() == 1) || (ifCatsGame() == 1))
		{
			break;
		}
		

	} while ((ifXWin() != 1) && (ifOWin() != 1) && (ifCatsGame() != 1));
	if (ifCatsGame() == 1)
	{
		cout << "END OF GAME CAT'S GAME noone won the match! ===> bravo cats\n";
	}
	else if (ifXWin() == 1)
	{
		cout << "END OF GAME X win! ===> bravo X\n";
	}
	else if (ifOWin() == 1)
	{
		cout << "END OF GAME O win ! ===> bravo O\n";
	}

	
	
	return 0;
}


void welcome()
{
	cout << "Welcome to x o game!\n";
	cout << "Lets start the fun\n";
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			gameGridArray[x][y] = 0;
		}
	}

}
void showGrid() //must import gameGridArray and populate showGridArray with conversion
{
	// conversion from -1 to X and from 1 to O
	for (int rows = 0; rows < 3; rows++)
	{
		for (int cols = 0; cols < 3; cols++)
		{
			// if array adress rows cols have value = 1 then string array adress [rows] [cols] = X || else if -1 then O else "SPACEBAR"
			if (gameGridArray[cols][rows] == 1)
			{
				showGridArray[cols][rows] = 'X';
			}
			else if (gameGridArray[cols][rows] == -1)
			{
				showGridArray[cols][rows] = 'O';
			}
			else
			{
				showGridArray[cols][rows] = ' ';
			}
				
		}
	}
	
	

	// replace x and o with string array with corresponding addrress.
	cout << "||===============" << "=" << "||===============" << "=" << "||===============" << "=" << "==||" << endl;
	cout << "||  Cell: 0 0 ==>" << showGridArray[0][0] << "||  Cell: 0 1 ==>" << showGridArray[0][1] << "||  Cell: 0 2 ==>" << showGridArray[0][2] << "  ||" << endl;
	cout << "||===============" << "=" << "||===============" << "=" << "||===============" << "=" << "==||" << endl;
	cout << "||===============" << "=" << "||===============" << "=" << "||===============" << "=" << "==||" << endl;
	cout << "||  Cell: 1 0 ==>" << showGridArray[1][0] << "||  Cell: 1 1 ==>" << showGridArray[1][1] << "||  Cell: 1 2 ==>" << showGridArray[1][2] << "  ||" << endl;
	cout << "||===============" << "=" << "||===============" << "=" << "||===============" << "=" << "==||" << endl;
	cout << "||===============" << "=" << "||===============" << "=" << "||===============" << "=" << "==||" << endl;
	cout << "||  Cell: 2 0 ==>" << showGridArray[2][0] << "||  Cell: 2 1 ==>" << showGridArray[2][1] << "||  Cell: 2 2 ==>" << showGridArray[2][2] << "  ||" << endl;
	cout << "||===============" << "=" << "||===============" << "=" << "||===============" << "=" << "==||" << endl;
}



// All conditions must be checked before

bool ifXWin()
{
	int result = 0;
	//Horizontal for X
	if ((gameGridArray[0][0] + gameGridArray[0][1] + gameGridArray[0][2]) == 3)
	{
		result = 1;
	}
	else if ((gameGridArray[1][0] + gameGridArray[1][1] + gameGridArray[1][2]) == 3)
	{
		result = 1;
	}
	else if ((gameGridArray[2][0] + gameGridArray[2][1] + gameGridArray[2][2]) == 3)
	{
		result = 1;
	}
	//vertical for X
	else if ((gameGridArray[0][0] + gameGridArray[1][0] + gameGridArray[2][0]) == 3)
	{
		result = 1;
	}
	else if ((gameGridArray[0][1] + gameGridArray[1][1] + gameGridArray[2][1]) == 3)
	{
		result = 1;
	}
	else if ((gameGridArray[0][2] + gameGridArray[1][2] + gameGridArray[2][2]) == 3)
	{
		result = 1;
	}
	//diagonal for X
	else if ((gameGridArray[0][0] + gameGridArray[1][1] + gameGridArray[2][2]) == 3)
	{
		result = 1;
	}
	else if ((gameGridArray[0][2] + gameGridArray[1][1] + gameGridArray[2][0]) == 3)
	{
		result = 1;
	}
	return result;
}
bool ifOWin()
{
	int result = 0;
	//Horizontal for O
	if ((gameGridArray[0][0] + gameGridArray[0][1] + gameGridArray[0][2]) == -3)
	{
		result = 1;
	}
	else if ((gameGridArray[1][0] + gameGridArray[1][1] + gameGridArray[1][2]) == -3)
	{
		result = 1;
	}
	else if ((gameGridArray[2][0] + gameGridArray[2][1] + gameGridArray[2][2]) == -3)
	{
		result = 1;
	}
	//vertical for O
	else if ((gameGridArray[0][0] + gameGridArray[1][0] + gameGridArray[2][0]) == -3)
	{
		result = 1;
	}
	else if ((gameGridArray[0][1] + gameGridArray[1][1] + gameGridArray[2][1]) == -3)
	{
		result = 1;
	}
	else if ((gameGridArray[0][2] + gameGridArray[1][2] + gameGridArray[2][2]) == -3)
	{
		result = 1;
	}
	//diagonal for O
	else if ((gameGridArray[0][0] + gameGridArray[1][1] + gameGridArray[2][2]) == -3)
	{
		result = 1;
	}
	else if ((gameGridArray[0][2] + gameGridArray[1][1] + gameGridArray[2][0]) == -3)
	{
		result = 1;
	}
	return result;
}
bool ifCatsGame()
{
	int counter = 0;
	int reader = 0;
	bool result = 0;
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			reader = gameGridArray[y][x];
			if (reader == 1)
			{
				counter++;
			}
			else if (reader == -1)
			{
				counter++;
			}
		}
	}
	if (counter == 9)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	//cout << "test counter = " << counter << " test result = " << result << endl;
	return result;
}

// user input

void turnOfX()
{
	int input;
	cout << "now Ur turn X" << endl;
	cout << "enter 2 numbers of coordinates for placing X on grid" << endl;
	inputofX:
	cin >> input;
	switch (input)
	{
		case 00:
			if ((gameGridArray[0][0] != 1) && (gameGridArray[0][0] != -1))
			{
				gameGridArray[0][0] = 1;
			}
			else
			{
				cout << "wrong input try again" << endl;
				goto inputofX;
			}
		break;
		case 01:
			if ((gameGridArray[0][1] != 1) && (gameGridArray[0][1] != -1))
			{
				gameGridArray[0][1] = 1;
			}
			else
			{
				cout << "wrong input try again" << endl;
				goto inputofX;
			}
			break;
		case 02:
			if ((gameGridArray[0][2] != 1) && (gameGridArray[0][2] != -1))
			{
				gameGridArray[0][2] = 1;
			}
			else
			{
				cout << "wrong input try again"<<endl;
				goto inputofX;
			}
			break;
		case 10:
			if ((gameGridArray[1][0] != 1) && (gameGridArray[1][0] != -1))
			{
				gameGridArray[1][0] = 1;
			}
			else
			{
				cout << "wrong input try again"<<endl;
				goto inputofX;
			}
			break;
		case 11:
			if ((gameGridArray[1][1] != 1) && (gameGridArray[1][1] != -1))
			{
				gameGridArray[1][1] = 1;
			}
			else
			{
				cout << "wrong input try again" << endl;
				goto inputofX;
			}
			break;
		case 12:
			if ((gameGridArray[1][2] != 1) && (gameGridArray[1][2] != -1))
			{
				gameGridArray[1][2] = 1;
			}
			else
			{
				cout << "wrong input try again" << endl;
				goto inputofX;
			}
			break;
		case 20:
			if ((gameGridArray[2][0] != 1) && (gameGridArray[2][0] != -1))
			{
				gameGridArray[2][0] = 1;
			}
			else
			{
				cout << "wrong input try again" << endl;
				goto inputofX;
			}
			break;
		case 21:
			if ((gameGridArray[2][1] != 1) && (gameGridArray[2][1] != -1))
			{
				gameGridArray[2][1] = 1;
			}
			else
			{
				cout << "wrong input try again" << endl;
				goto inputofX;
			}
			break;
		case 22:
			if ((gameGridArray[2][2] != 1) && (gameGridArray[2][2] != -1))
			{
				gameGridArray[2][2] = 1;
			}
			else
			{
				cout << "wrong input try again" << endl;
				goto inputofX;
			}
			break;
		default:
			cout << "wrong input try again" << endl;
			goto inputofX;
	}
	showGrid();
}
void turnOfO()
{
	int input;
	cout << "now Ur turn O" << endl;
	cout << "enter 2 numbers of coordinates for placing O on grid" << endl;
inputofO:
	cin >> input;
	switch (input)
	{
	case 00:
		if ((gameGridArray[0][0] != 1) && (gameGridArray[0][0] != -1))
		{
			gameGridArray[0][0] = -1;
		}
		else
		{
			cout << "wrong input try again" << endl;
			goto inputofO;
		}
		break;
	case 01:
		if ((gameGridArray[0][1] != 1) && (gameGridArray[0][1] != -1))
		{
			gameGridArray[0][1] = -1;
		}
		else
		{
			cout << "wrong input try again" << endl;
			goto inputofO;
		}
		break;
	case 02:
		if ((gameGridArray[0][2] != 1) && (gameGridArray[0][2] != -1))
		{
			gameGridArray[0][2] = -1;
		}
		else
		{
			cout << "wrong input try again" << endl;
			goto inputofO;
		}
		break;
	case 10:
		if ((gameGridArray[1][0] != 1) && (gameGridArray[1][0] != -1))
		{
			gameGridArray[1][0] = -1;
		}
		else
		{
			cout << "wrong input try again" << endl;
			goto inputofO;
		}
		break;
	case 11:
		if ((gameGridArray[1][1] != 1) && (gameGridArray[1][1] != -1))
		{
			gameGridArray[1][1] = -1;
		}
		else
		{
			cout << "wrong input try again" << endl;
			goto inputofO;
		}
		break;
	case 12:
		if ((gameGridArray[1][2] != 1) && (gameGridArray[1][2] != -1))
		{
			gameGridArray[1][2] = -1;
		}
		else
		{
			cout << "wrong input try again" << endl;
			goto inputofO;
		}
		break;
	case 20:
		if ((gameGridArray[2][0] != 1) && (gameGridArray[2][0] != -1))
		{
			gameGridArray[2][0] = -1;
		}
		else
		{
			cout << "wrong input try again" << endl;
			goto inputofO;
		}
		break;
	case 21:
		if ((gameGridArray[2][1] != 1) && (gameGridArray[2][1] != -1))
		{
			gameGridArray[2][1] = -1;
		}
		else
		{
			cout << "wrong input try again" << endl;
			goto inputofO;
		}
		break;
	case 22:
		if ((gameGridArray[2][2] != 1) && (gameGridArray[2][2] != -1))
		{
			gameGridArray[2][2] = -1;
		}
		else
		{
			cout << "wrong input try again" << endl;
			goto inputofO;
		}
		break;
	default:
		cout << "wrong input try again" << endl;
		goto inputofO;
	}
	showGrid();
}


