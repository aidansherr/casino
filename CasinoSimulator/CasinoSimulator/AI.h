#pragma once
#include "Player.h"

ref class AI : public Player//inherits player
{
	
	bool canBet=false;
	int anti = 0;
	String^ move;
public:
	void setHandValue(int x)
	{
		handValue = x;
	}
	void getAnti(int x)
	{
		total-= x;
	}
	int fold()
	{
		move = "Folded";
		hasFold = true;
		return 0;
	}
	int bet(int x)
	{
		std::string temp = std::to_string(x);
		String^ temp2 = gcnew String(temp.c_str());
		move = "Bet "+temp2;
		total -= x;
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
				canBet = true;
				return bet(100);
				

			}
			else if (anti==0)
			{
				move = "Check";
				return 0;
			}
			return 0;
		}
		
	}
	String^ getMove()
	{
		return move;
	}
};
