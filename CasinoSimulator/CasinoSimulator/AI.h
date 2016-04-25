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
	int AIbet(int x)
	{
		return x;
	}
	void intelligance(int x)
	{
		int count = 0;
			if (x <=16 )
			{
				fold();
			}
			else if (x >= 20 && count==0)
			{
				if (total >= 500)
				{
					bet(500);
					total += 500;
				}
				count++;
			}
			else if (x >= 10 && count == 0)
			{
				bet(100);
				total += 100;
				count++;
			}
			else
			{
				bet(anti);
				total += anti;
			}
		
	}
};
