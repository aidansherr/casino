#pragma once
#include "Card.h"



ref class Player
{
	
protected:
	//pointer for adding a card in the players hand
	int pos1 = 0;
	//pointer for returning a card in the players hand
	int pos2 = 0;
	//the total cash the player has
	int total =2000;
	int handValue=0;
	array <Card^, 1>^hand = gcnew array<Card^, 1>(8);
	int handCount;
	bool hasFold = false();
public:
	//adds a card at pos1 in the players hand
	void addCard(Card^ card)
	{
		if (pos1 > 7)
		{
			pos1 = 0;
			handCount = 0;
		}
		else
		{
			pos1++;
			hand[pos1 - 1] = card;
			handCount++;
		}
	}
	//returns the card at positon pos2 in the players hand
	Card^ getHand()
	{
		if (pos2 >7 )
		{
			pos2 = 0;
		}
		pos2++;
		return hand[pos2 - 1];
	}
	void getHandValue(int x)
	{
		handValue = x;
	}
	int returnHandValue()
	{
		return handValue;
	}
	//resets the pointer for the players hand
	void reset()
	{
		pos2 = 0;
	}
	//returns the players current total
	int getTotal()
	{
		return total;
	}
	//returns hand size
	int getHandCount()
	{
		return handCount;
	}
	//increments the players total
	void changeTotal(int change)
	{
		total += change;
	}
	void resetPlayer()
	{
		pos1 = 0;
		pos2 = 0;
		handValue = 0;
		handCount = 0;
	}
	void emptyHand()
	{
		for (int i = 0; i < 7; i++)
		{
			
		}
	}
	void setHandValue(int x)
	{
		handValue = x;
	}
	bool getHasFold()
	{
		return hasFold;
	}
};