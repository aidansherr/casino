#pragma once
#include "Player.h"

ref class AI : public Player//inherits player
{
	bool easy, medium, hard;
	
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
	int intelligance(int x)
	{
		int count = 0;
			if (x <=16 )
			{
				return fold();
			}
			else if (x >= 20 && count==0)
			{
				if (total >= 500)
				{
					return bet(500);
					total += 500;
				}
				count++;
			}
			else if (x >= 10 && count == 0)
			{
				return bet(100);
				total += 100;
				count++;
			}
			else
			{
				return bet(anti);
				total += anti;
			}
		
	}
};
