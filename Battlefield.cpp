#include "Battlefield.h"


Battlefield::Battlefield(int _height, int _width) : height(_height), width(_width)
{
	battlefield_arr = new ObjectOnBattlefield * [height];
	for (int i = 0; i < height; i++)
	{
		battlefield_arr[i] = new ObjectOnBattlefield[width];
		/*for (int j = 0; j < width; j++)
		{
			battlefield_arr[i][j] = ' ';
		}*/
	}
}


Battlefield::~Battlefield()
{
	for (int i = 0; i < height; i++)
	{
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
			std::cout << battlefield_arr[i][j].showSkin();
		}
		std::cout << std::endl;
	}
}

void Battlefield::setInArrTank(int x, int y)
{
	Tank
		battlefield_arr[x][y] = ;
}

char Battlefield::get_symbol(int x, int y)
{
	return battlefield_arr[x][y].showSkin();
}