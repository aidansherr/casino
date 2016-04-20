#pragma once

#include "Deck.h"
#include "Location.h"
#include "position.h"
#include "Player.h"
#include "AI.h"

ref class PokerTemplate
{
	//pointer for the current position in the array river
	int riverPoint=0;
	//pointer for adding a card to the array riverCards
	int cardPoint1 = 0;
	//pointer for returning a card in the array riverCards
	int cardPoint2 = 0;
	//the deck the game is being played with
	Deck^ PokerDeck;
	//an array of locations for the river
	array< Location2^, 1 > ^river = gcnew array< Location2^, 1 >(6);
	//an array of the four different positions in the game
	array< Position^, 1 > ^positions = gcnew array< Position^, 1 >(4);
	//an array of cards that will be in the river
	array<Card^, 1> ^riverCards = gcnew array<Card^, 1>(6);
	//the location for the deck
	Location2^ deckLoc;
	//the current betting pool
	int betPool=0;
	//The player
	Player^ player;
	//The AI
	array<AI^, 1> ^computers = gcnew array<AI^, 1>(3);

	

public:
	PokerTemplate()
	{
		//Initilizes the deck location at a set point
		deckLoc = gcnew Location2(200, 250);
		int x = 300;
		int y = 350;
		//initilizes the river locations at set points
		for (int i = 0; i < 5; i++)
		{
			river[i] = gcnew Location2(x, y);
			x += 60;
		}
		//creates Positions for all four positions of the game
		positions[0] = gcnew Position(true, false, false, false);
		positions[1] = gcnew Position(false, true, false, false);
		positions[2] = gcnew Position(false, false, true, false);
		positions[3] = gcnew Position(false, false, false, true);
		player = gcnew Player();
		for (int i = 0; i < 3; i++)
		{
			computers[i] = gcnew AI();
		}
	};
	//returns the location of the deck
	Location2^ getDeckLocation()
	{
		return deckLoc;
	}
	void checkForWinner()
	{

	}
	//returns the location in river at riverPoint
	Location2^ getRiver()
	{
		riverPoint++;
		return river[riverPoint - 1];
	}
	//returns a position in the array positions at point x
	Position^ getPosition(int x)
	{
		
		return positions[x];
	}
	//adds Card^ card to the array riverCards at position cardPoint1
	void addRiverCard(Card^ card)
	{
		riverCards[cardPoint1] = card;
		cardPoint1++;
	}
	//returns a card in the array riverCards at position cardPoint2
	Card^ getRiverCard()
	{
		if (cardPoint2 > 5)
		{
			cardPoint2 = 0;
		}
		cardPoint2++;
		return riverCards[cardPoint2 - 1];
	}
	//resets the pointer cardPoint2
	void reset()
	{
		cardPoint2 = 0;
	}
	int getBetPool()
	{
		return betPool;
	}
	void addToPool(int newVal)
	{
		betPool += newVal;
	}
	Player^ getPlayer()
	{
		return player;
	}
	Player^ getAI(int x)
	{
		return computers[x];
	}
};




