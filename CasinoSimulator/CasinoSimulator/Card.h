#pragma once
#include "Location.h"
ref class Card
{
	//the face vale of a card (Ace, 8, king ect)
	int value;
	//the suit of the card, club, ace, heeart diamond
	int suit;
	//The location of the card on the board
	Location2^ cardLoc;
public:
	Card(int value, int suit)
	{
		cardLoc = gcnew Location2(0, 0);
		this->value = value;
		this->suit = suit;
	}

};