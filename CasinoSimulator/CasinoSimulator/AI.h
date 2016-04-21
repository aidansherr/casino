#pragma once
#include "Player.h"

ref class AI : public Player//inherits player
{
	bool easy, medium, hard;
	
	int anti = 0;
public:
	
	void getAnti(int x)
	{
		anti = x;
	}
	void fold()
	{
		
	}
	int bet(int x)
	{
		total -= x;
		return x;
	}
	void intelligance()
	{
		if (easy)
		{

		}
		if (medium)
		{
			if (handValue <= 3)
			{
				fold();
			}
			else if (handValue >= 20)
			{
				if (total >= 500)
				{
					bet(500);
				}
			}
			else if (handValue >= 10)
			{
				bet(100);
			}
			else
			{
				bet(anti);
			}
		}
	}
};
