#pragma once
#include "Location.h"
ref class Position
{
private:
	//bool variables that determine what side the position is in
	bool top, bottom, left, right;
	//an array of locations for that position
	array<Location2^, 1> ^locations = gcnew array<Location2^, 1>(8);
	
	//the middle of the array of locations
	int mid = 4;
	//a variable that will determine where to place the next card in the players hand
	int evenOdd = 0;

public:
	Position(bool top, bool bottom, bool left, bool right)
	{
		//sets the position based on the bool variable givven in the constructer
		//The constructer then sets the array of locations with set values for all the cards
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
	//returns a location at point mid
	Location2^ getLocation()
	{
		//if even the it will return a location to the middles right
		if (evenOdd % 2 != 0)
		{
			mid += evenOdd;
		}
		//else returns a location to the left
		else
		{
			mid -= evenOdd;

		}
		evenOdd++;
		return locations[mid];
	}
	
};
