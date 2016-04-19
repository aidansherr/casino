#pragma once
#include "Player.h"
#include "Card.h"
ref class Logic
{private:
	//creates the hand array
	array <Card^, 1>^hand2 = gcnew array<Card^, 1>(8);
	// creates an array to check for certain hands
	array <int, 1>^test = gcnew array<int, 1>(5);
	Player^ player;
public:
	// creates the players hand to check for posiibilities
	Logic()
	{
		for (int i = 0; i < 7; i++)
		{
			hand2[i] = player->getHand();
		}
		
	}
	//checks for a royal flush
	bool RoyalFlush()
	{
		for (int i = 0; i < 4; i++)
		{
			test[i] = 10 + i;
		}
		for (int i = 0; i < 4; i++)
		{
			int CardCount = 0;
			for (int n = 0; n < 5; n++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (hand2[j]->getValue() == test[n] && hand2[j]->getSuit == i)
					{
						CardCount++;
					}
				}
			}
			if (CardCount == 5)
			{
				return true;
			}
		}
	}
	// checks for a straight flush
	bool StraightFlush()
	{
		for (int x = 0; x < 8; x++)
		{
			for (int i = 0; i < 4; i++)
			{
				test[i] = hand2[x]->getValue() + i;
			}
			for (int i = 0; i < 4; i++)
			{
				int CardCount = 0;
				for (int n = 0; n < 5; n++)
				{
					for (int j = 0; j < 8; j++)
					{
						if (hand2[j]->getValue() == test[n] && hand2[j]->getSuit == i)
						{
							CardCount++;
						}
					}
				}
				if (CardCount == 5)
				{
					return true;
				}
			}
		}
	}
	// checks for four of a kind
	bool FourOfAKind()
	{
		for (int i = 0; i < 8; i++)
		{
			int CardCount = 0;
			for (int j = 0; j < 8; j++)
			{
				if (j != i) 
				{
					if (hand2[i]->getValue() == hand2[j]->getValue())
					{
						CardCount++;
					}
					if (CardCount == 4)
					{
						return true;
					}
				}
			}
		}
	}
	// checks to see if there is a fullhouse
	bool FullHouse()
	{
		int CardCount2 = 0;
		for (int i = 0; i < 8; i++)
		{
			int CardCount = 0;
			for (int j = 0; j < 8; j++)
			{
				if (i != j)
				{
					if (hand2[i]->getValue() == hand2[j]->getValue())
					{
						CardCount++;
					}
					if (CardCount == 3 || CardCount == 2)
					{
						CardCount2 = CardCount;
					}
					if ((CardCount == 3 && CardCount2 == 2) || (CardCount == 2 && CardCount2 == 3))
					{
						return true;
					}
				}
			}
		}
	}
	// checks to see if there is a flush
	bool Flush()
	{
		for (int i = 0; i < 8; i++)
		{
			int CardCount;
			for (int j = 0; j < 8;j++)
			{
				if (j != i)
				{
					if (hand2[i]->getSuit == hand2[j]->getSuit)
					{
						CardCount++;
					}
					if (CardCount == 5)
					{
						return true;
					}
				}
			}
		}
	}
	// checks to see if their is a straight with ace high
	bool RoyalStraight()
	{
		for (int i = 0; i < 4; i++)
		{
			test[i] = 10 + i;
		}
					int CardCount = 0;
			for (int n = 0; n < 5; n++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (hand2[j]->getValue() == test[n])
					{
						CardCount++;
					}
				}
			}
			if (CardCount == 5)
			{
				return true;
			}
	}
	//checks to see if there is a straigh
	bool Straight()
	{
		for (int x = 0; x < 8; x++)
		{
			for (int i = 0; i < 4; i++)
			{
				test[i] = hand2[x]->getValue() + i;
			}
			
				int CardCount = 0;
				for (int n = 0; n < 5; n++)
				{
					for (int j = 0; j < 8; j++)
					{
						if (hand2[j]->getValue() == test[n])
						{
							CardCount++;
						}
					}
				}
				if (CardCount == 5)
				{
					return true;
				}
			}
	}
	// checks to see if there are three of a kind
	bool ThreeOfAKind()
	{
		
		for (int i = 0; i < 8; i++)
		{
			int CardCount = 0;
			for (int j = 0; j < 8; j++)
			{
				if (i != j)
				{
					if (hand2[i]->getValue() == hand2[j]->getValue())
					{
						CardCount++;
					}
					if (CardCount == 3)
					{
						return true;
					}
					
				}
			}
		}
	}
	// checks to see if there are 2 pairs
	bool TwoPairs()
	{
		int CardCount2 = 0;
		for (int i = 0; i < 8; i++)
		{
			int CardCount = 0;
			for (int j = 0; j < 8; j++)
			{
				if (i != j)
				{
					if (hand2[i]->getValue() == hand2[j]->getValue())
					{
						CardCount++;
					}
					if (CardCount == 2)
					{
						CardCount2 = CardCount;
					}
					if (CardCount == 2 && CardCount2 == 2)
					{
						return true;
					}
				}
			}
		}
	}
	// checks to see if there are any pairs
	bool Pairs()
	{

		for (int i = 0; i < 8; i++)
		{
			int CardCount = 0;
			for (int j = 0; j < 8; j++)
			{
				if (i != j)
				{
					if (hand2[i]->getValue() == hand2[j]->getValue())
					{
						CardCount++;
					}
					if (CardCount == 2)
					{
						return true;
					}

				}
			}
		}
	}
	// checks to see what the highest card is
	int HighCard()
	{
		int x = 0;
		for (int i = 0; i < 8; i++)
		{
			if (x < hand2[i]->getValue())
			{
				x = hand2[i]->getValue();
			}
		}
		return x;
	}
	// assigns values to each hand
	int HandValue()
	{
		if(RoyalFlush()==true)
		{
			return 24;
		}
		else if (StraightFlush() == true)
		{
			return 23;
		}
		else if (FourOfAKind() == true)
		{
			return 22;
		}
		else if (FullHouse() == true)
		{
			return 21;
		}
		else if (Flush() == true)
		{
			return 20;
		}
		
		else if (RoyalStraight() == true)
		{
			return 19;
		}
		else if (Straight() == true)
		{
			return 18;
		}
		else if (ThreeOfAKind() == true)
		{
			return 17;
		}
		else if (TwoPairs() == true)
		{
			return 16;
		}
		else if (Pairs() == true)
		{
			return 15;
		}
		else
		{
			return HighCard();
		}
	}
};