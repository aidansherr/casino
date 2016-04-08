#pragma once
#include "Card.h"
#include <cstdlib>
#include <ctime>

ref class Deck
{
	//the top card in the deck
	int topCard=0;
	//the deck of cards comprised of an array of card objects
	array<Card^, 1> ^cardDeck = gcnew array<Card^, 1>(52);

public:
	Deck()
	{
		//initilizes a new deck
		for (int i = 0; i < 4; i++)
		{
			//points to the position in the deck
			int point = 0;

			for (int j = 0; j < 13; j++)
			{
				//initilizes a new card with a face value and suit value
				//only one face value for each suit value
				cardDeck[point] = gcnew Card(j, i);
				point++;
			}
		}
	}
	void shuffle()
	{
		int randPos1;
		int randPos2;
		Card^ temp;
		srand(time(0));
		for (int i = 0; i < 10; i++)
		{
			//grabs two positions in the deck
			randPos1 = (rand() % 52);
			randPos2 = (rand() % 52);
			//switches the value at the two positions
			temp = cardDeck[randPos1];
			cardDeck[randPos1] = cardDeck[randPos2];
			cardDeck[randPos2] = temp;
		}
	}
	Card^ draw()
	{//draws the top card in the deck
		Card^ drawn = cardDeck[topCard];
		//incriments topCard so that the next draw() will return the next item in the array
		topCard++;
		//returns the drawn card
		return drawn;
	}
};