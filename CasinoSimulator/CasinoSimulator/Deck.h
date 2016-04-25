#pragma once
#include "Card.h"
#include <cstdlib>
#include <ctime>
#include "Location.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


ref class Deck
{
	//the top card in the deck
	int topCard=0;
	//the deck of cards comprised of an array of card objects
	array<Card^, 1> ^cardDeck = gcnew array<Card^, 1>(52);
	//an array of the cards Icons
	array<System::Drawing::Icon^, 1> ^icons = gcnew array<System::Drawing::Icon^, 1>(52);
	Location2^ deckLoc;

public:
	Deck()
	{
		
	}
	void shuffle()
	{
		int randPos1;
		int randPos2;
		Card^ temp;
		srand(time(0));
		for (int i = 0; i < 1000; i++)
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
		
		topCard++;
		//returns the drawn card
		Card^ drawn = cardDeck[topCard-1];
		//incriments topCard so that the next draw() will return the next item in the array
		return drawn;
	}
	void setLocation(Location2^ loc)
	{
		deckLoc = loc;
	}
	Location2^ getLocation()
	{
		return deckLoc;
	}
	void getIcons()
	{
		std::fstream infile;
		infile.open("Cards.txt");
		for (int i = 0; i < 52; i++)
		{
			std::string temp;
			infile >> temp;
			String^ name = gcnew String(temp.c_str());
			System::Drawing::Icon^tempicon = gcnew System::Drawing::Icon(name);
			icons[i] = tempicon;
		}
	}
	void makeCards()
	{
		int point = 0;
		
		getIcons();
		//initilizes a new deck
		//points to the position in the deck
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 13; j++)
			{
				//initilizes a new card with a face value and suit value
				//only one face value for each suit value
				cardDeck[point] = gcnew Card(j, i);
				point++;
			}
		}

		
	}
	void setIcons()
	{
		int point = 0;
		int p = 1;
		int t = 0;
		for (int i = 0; i < 52; i++)
		{
			
				cardDeck[point]->setIcon(icons[point]);
			
			point++;
		}
		shuffle();
	}
	void resetDeck()
	{
		topCard = 0;
		shuffle();
	}
};
