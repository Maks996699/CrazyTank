#include "Battlefield.h"

Battlefield::Battlefield(int _height, int _width) : height(_height), width(_width), userTank(NULL)
{
	battlefield_arr = new ObjectOnBattlefield** [height];
	for (int i = 0; i < height; i++)
	{
		battlefield_arr[i] = new ObjectOnBattlefield* [width];
		for (int j = 0; j < width; j++)
		{
			battlefield_arr[i][j] = new ObjectOnBattlefield();
		}
	}
}


Battlefield::~Battlefield()
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			delete battlefield_arr[i][j];
		}
		delete[] battlefield_arr[i];
	}
	delete[] battlefield_arr;
}

void Battlefield::show() const
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			std::cout << battlefield_arr[i][j]->showSkin();
		}
		std::cout << std::endl;
	}
}

void Battlefield::setInArrTank(int x, int y)
{
	delete battlefield_arr[y][x];
	battlefield_arr[y][x] = userTank = new Tank(x, y, Direct::up);
}

char Battlefield::get_symbol(int x, int y)
{
	return battlefield_arr[y][x]->showSkin();
}

void Battlefield::start(const int MoveUp, const int MoveDown, const int MoveRight, const int MoveLeft, const int Shot, const int Exit)
{
	int input = 1;
	while(input != Exit) 
	{
		show();
		std::cout << "X: " << userTank->getX() << " Y: " << userTank->getY();

		input = _getwch();
		if(input == 0 || input == 0xE0)  //When reading a function key or an arrow key, each function must be called twice,
		{								 //the first call returns 0 or 0xE0, and the second call returns the actual key code.
			input = _getwch();
		}
		

		if (input == MoveUp)
		{
			userTankUp();
		}
		else if (input == MoveDown)
		{
			userTankDown();
		}
		else if (input == MoveLeft)
		{
			userTankLeft();
		}
		else if (input == MoveRight)
		{
			userTankRight();
		}
		else
		{
			continue;
		}


		system("cls");
		


	}
}

void Battlefield::userTankUp()
{
	if (userTank->getY() > 0) {
		ObjectOnBattlefield* tmp = battlefield_arr[userTank->getY() - 1][userTank->getX()];

		battlefield_arr[userTank->getY() - 1][userTank->getX()] = userTank;

		battlefield_arr[userTank->getY()][userTank->getX()] = tmp;

		userTank = battlefield_arr[userTank->getY() - 1][userTank->getX()];

		userTank->move_up();
	}
}

void Battlefield::userTankDown()
{
	if (userTank->getY() < height - 1) {
		ObjectOnBattlefield* tmp = battlefield_arr[userTank->getY() + 1][userTank->getX()];

		battlefield_arr[userTank->getY() + 1][userTank->getX()] = userTank;

		battlefield_arr[userTank->getY()][userTank->getX()] = tmp;

		userTank = battlefield_arr[userTank->getY() + 1][userTank->getX()];

		userTank->move_down();
	}
}

void Battlefield::userTankLeft()
{
	if (userTank->getX() > 0) {
		ObjectOnBattlefield* tmp = battlefield_arr[userTank->getY()][userTank->getX() - 1];

		battlefield_arr[userTank->getY()][userTank->getX() - 1] = userTank;

		battlefield_arr[userTank->getY()][userTank->getX()] = tmp;

		userTank = battlefield_arr[userTank->getY()][userTank->getX() - 1];

		userTank->move_left();
	}
}

void Battlefield::userTankRight()
{
	if (userTank->getX() < width - 1) {
		ObjectOnBattlefield* tmp = battlefield_arr[userTank->getY()][userTank->getX() + 1];

		battlefield_arr[userTank->getY()][userTank->getX() + 1] = userTank;

		battlefield_arr[userTank->getY()][userTank->getX()] = tmp;

		userTank = battlefield_arr[userTank->getY()][userTank->getX() + 1];

		userTank->move_right();
	}
}
