#pragma once
#include "Location.h"
ref class Position
{
private:
	bool top, bottom, left, right;
	array<Location2^, 1> ^locations = gcnew array<Location2^, 1>(8);
	
	int mid = 4;
	int evenOdd = 0;

public:
	Position(bool top, bool bottom, bool left, bool right)
	{
		int x, y;
		if (bottom == true)
		{
			x = 99;
			y = 550;
			for (int i = 0; i < 8;i++)
			{
				locations[i] = gcnew Location2(x , y);
				x += 75;
			}
		}
		if (top == true)
		{
			x = 199;
			y = 100;
			for (int i = 0; i < 8; i++)
			{
				locations[i] = gcnew Location2(x, y);
				x += 50;
			}
		}
		if (left == true)
		{
			x = 28;
			y = 175;
			for (int i = 0; i < 8; i++)
			{
				locations[i] = gcnew Location2(x, y);
				y += 50;
			}
		}
		if (right == true)
		{
			x = 798-88;
			y = 175;
			for (int i = 0; i < 8; i++)
			{
				locations[i] = gcnew Location2(x, y);
				y+=50;
			}
		}
	}
	Location2^ getLocation()
	{
		if (evenOdd % 2 != 0)
		{
			mid += evenOdd;
		}
		else
		{
			mid -= evenOdd;

		}
		evenOdd++;
		return locations[mid];
	}
	
};
