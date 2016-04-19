#pragma once
#include "Location.h"
ref class Card
{
	//the face vale of a card (Ace, 8, king ect). Ace is 1, jack is 11, queen is 12 and king is 13
	int value;
	//the suit of the card, club, ace, heeart diamond. 0 is spade, 1 is club, 2 is heart, three is diamond
	int suit;
	//The location of the card on the board
	static System::Drawing::Icon^ face;
	//The icon for the card
	Location2^ cardLoc;
	
public:
	Card(int value, int suit, System::Drawing::Icon^ icon)
	{
		face = icon;
		cardLoc = gcnew Location2(0, 0);
		this->value = value;
		this->suit = suit;
	}
	System::Drawing::Icon^ getIcon()
	{
		return face;
	}
	int getValue()
	{
		return value;
	}
	int getSuit()
	{
		return suit;
	}
	void setLocation(Location2^ loc)
	{
		cardLoc = loc;
	}
	Location2^ getLocation()
	{
		return cardLoc;
	}
	
};