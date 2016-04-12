#pragma once

#include "Deck.h"
#include "Location.h"

ref class PokerTemplate
{
	Deck^ PokerDeck;
	array< Location2^, 1 > ^river = gcnew array< Location2^, 1 >(6);
	array< Position^, 1 > positions = gcnew array< Position^, 1 >(4);

public:
	PokerTemplate()
	{
		postions[0] = gcnew Position(true, false, false, false);
		postions[1] = gcnew Position(false, true, false, false);
		postions[2] = gcnew Position(false, false, true, false);
		postions[3] = gcnew Position(false, false, false, true);

	};

	void checkForWinner()
	{

	};

};




