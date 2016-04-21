#pragma once
#include "Card.h"



ref class Player
{
	//pointer for adding a card in the players hand
	int pos1 = 0;
	//pointer for returning a card in the players hand
	int pos2 = 0;
protected:
	//the total cash the player has
	int total =2000;
	int handValue;
	array <Card^, 1>^hand = gcnew array<Card^, 1>(8);
	

public:
	//adds a card at pos1 in the players hand
	void addCard(Card^ card)
	{
		pos1++;
		hand[pos1-1] = card;
		
	}
	//returns the card at positon pos2 in the players hand
	Card^ getHand()
	{
		if (pos2 >5 )
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
	//increments the players total
	void changeTotal(int change)
	{
		total += change;
	}
};