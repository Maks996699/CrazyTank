#include "Battlefield.h"


Battlefield::Battlefield(int _height, int _width) : height(_height), width(_width)
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
	delete battlefield_arr[x][y];
	battlefield_arr[x][y] = new Tank(x, y, Direct::up);
}

char Battlefield::get_symbol(int x, int y)
{
	return battlefield_arr[x][y]->showSkin();
}

void Battlefield::start(const int MoveUp, const int MoveDown, const int MoveRight, const int MoveLeft, const int Shot, const int Exit)
{
	int input = 1;
	while(input != Exit) 
	{
		show();

		input = _getwch();
		if(input == 0 || input == 0xE0)  //When reading a function key or an arrow key, each function must be called twice,
		{								 //the first call returns 0 or 0xE0, and the second call returns the actual key code.
			input = _getwch();
		}
		
		system("cls");


	}
}
