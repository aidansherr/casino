#pragma once

#include "Deck.h"
#include "Location.h"
#include "position.h"

ref class PokerTemplate
{
	int riverPoint=0;
	Deck^ PokerDeck;
	array< Location2^, 1 > ^river = gcnew array< Location2^, 1 >(6);
	array< Position^, 1 > ^positions = gcnew array< Position^, 1 >(4);
	Location2^ deckLoc;

public:
	PokerTemplate()
	{
		deckLoc = gcnew Location2(200, 250);
		int x = 300;
		int y = 250;
		for (int i = 0; i < 5; i++)
		{
			river[i] = gcnew Location2(x, y);
			x += 60;
		}
		positions[0] = gcnew Position(true, false, false, false);
		positions[1] = gcnew Position(false, true, false, false);
		positions[2] = gcnew Position(false, false, true, false);
		positions[3] = gcnew Position(false, false, false, true);

	};
	Location2^ getDeckLocation()
	{
		return deckLoc;
	}
	void checkForWinner()
	{

	};
	Location2^ getRiver()
	{
		riverPoint++;
		return river[riverPoint - 1];
	}
	Position^ getPosition(int x)
	{
		return positions[x];
	}
};




