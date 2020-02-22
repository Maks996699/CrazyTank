#pragma once

#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "ObjectOnBattlefield.h"
#include "Tank.h"

class Battlefield
{
public:
	Battlefield(int, int);
	~Battlefield();
	void show() const;
	void setInArrTank(int x, int y);
	char get_symbol(int x, int y);
	void start(const int MoveUp, const int MoveDown, const int MoveRight, const int MoveLeft, const int Shot, const int Exit);

private:
	ObjectOnBattlefield*** battlefield_arr;
	int width;
	int height;
};