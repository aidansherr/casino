#pragma once
//Location2 is a location for all objects in the world
ref class Location2
{
	int x;
	int y;

public:
	Location2(int nx, int ny)
	{
		this->x = nx;
		this->y = ny;
	}

	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void setLocation(Location2^ loc)
	{
		this->x = loc->getX();
		this->y = loc->getY();
	}
};