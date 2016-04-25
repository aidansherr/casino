#pragma once
#include "Player.h"

ref class AI : public Player//inherits player
{
	
	bool canBet=false;
	int anti = 0;
	
public:
	void setHandValue(int x)
	{
		handValue = x;
	}
	void getAnti(int x)
	{
		anti = x;
	}
	int fold()
	{
		hasFold = true;
		return 0;
	}
	int bet(int x)
	{
		
		total -= x;
		return x;
	}
	int AIbet(int x)
	{
		return x;
	}
	int intelligance()
	{
		if (canBet)
		{
			return bet(100);
		}
		else
		{
			int x = handValue;
			if (x <= 7)
			{
				return fold();
			}

			else if (x >= 10)
			{

				return bet(100);
				canBet = true;

			}
			else
			{
				return 0;
			}
		}
		
	}
};
