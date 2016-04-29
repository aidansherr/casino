#pragma once
#include "Player.h"
#include "Card.h"
ref class Logic
{private:
	//creates the hand array
	array <Card^, 1>^hand2 = gcnew array<Card^, 1>(7);
	// creates an array to check for certain hands
	array <int, 1>^test = gcnew array<int, 1>(5);
	Player^ player;
	Card^ tieBreaker;
public:
	// creates the players hand to check for posiibilities
	Logic(Player^ newPlayer)
	{
		test[0] = 0;
		player = newPlayer;
		setHand();
		
	}
	void setHand()
	{
		for (int i = 0; i <player->getHandCount(); i++)
		{
			hand2[i] = player->getHand();
		}
		player->reset();
	}
	//checks for a royal flush
	bool RoyalFlush()
	{
		int n = 0;
		for (int i = 0; i <4 ; i++)
		{
			test[i] = 9 + i;
		}
		test[4] = 0;
		for (int i = 0; i < 4; i++)
		{
			int CardCount = 0;
			for (int x = 0; x < 5; x++)
			{
				for (int j = 0; j < player->getHandCount(); j++)
				{
					if (n < 5)
					{
						if (hand2[j]->getValue() == test[n] && hand2[j]->getSuit() == i)
						{
							CardCount++;
							n++;
						}
					}
				}
			}
			if (CardCount == 5)
			{
				return true;
			}
		}
		return false;
	}
	// checks for a straight flush
	bool StraightFlush()
	{
		int n = 0;
		for (int x = 0; x < player->getHandCount(); x++)
		{
			for (int i = 0; i < 5; i++)
			{
				test[i] = hand2[x]->getValue() + i;
			}
			for (int i = 0; i < 4; i++)
			{
				int CardCount = 0;
				for (int x = 0; x < 5; x++)
				{
					for (int j = 0; j < player->getHandCount(); j++)
					{
						if (n < 5)
						{
							if (hand2[j]->getValue() == test[n] && hand2[j]->getSuit() == i)
							{
								CardCount++;
								n++;
							}
						}
					}
				}
				if (CardCount == 5)
				{
					return true;
				}
			}
		}
		return false;
	}
	// checks for four of a kind
	bool FourOfAKind()
	{
		for (int i = 0; i < player->getHandCount(); i++)
		{
			int CardCount = 0;
			for (int j = 0; j < player->getHandCount(); j++)
			{
				if (j != i) 
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
		return false;
	}
	// checks to see if there is a fullhouse
	bool FullHouse()
	{
		Card^ pair1;
		int CardCount2 = 0;
		int CardCount = 0;
		int matchValue=-1;
		for (int i = 0; i < player->getHandCount(); i++)
		{
			CardCount = 0;
			for (int j = 0; j < player->getHandCount(); j++)
			{
				if (i != j && hand2[i]->getValue()!=matchValue && pair1 != hand2[j])
				{
					if (hand2[i]->getValue() == hand2[j]->getValue())
					{
						CardCount++;
					}			
					if ((CardCount == 2 && CardCount2 == 1) || (CardCount == 1 && CardCount2 == 2))
					{
						return true;
					}
				}
			}
			if (CardCount == 2 && CardCount2 == 0)
			{
				CardCount2 = CardCount;
				matchValue = hand2[i]->getValue();
			}
			else if (CardCount == 1 && CardCount2 == 0)
			{
				CardCount2 = CardCount;
				pair1 = hand2[i];
			}
		}
		return false;
	}
	// checks to see if there is a flush
	bool Flush()
	{
		for (int i = 0; i < player->getHandCount(); i++)
		{
			int CardCount=0;
			for (int j = 0; j < player->getHandCount();j++)
			{
				if (j != i)
				{
					if (hand2[i]->getSuit() == hand2[j]->getSuit())
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
		return false;
	}
	// checks to see if their is a straight with ace high
	bool RoyalStraight()
	{
		int n = 0;
		for (int i = 0; i < 4; i++)
		{
			test[i] = 9 + i;
		}
		test[4] = 0;
		int CardCount = 0;
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < player->getHandCount(); j++)
				{
					if (n < 5)
					{
						if (hand2[j]->getValue() == test[n])
						{
							CardCount++;
							n++;
						}
					}
				}
			}
			if (CardCount == 5)
			{
				return true;
			}
			return false;
	}
	//checks to see if there is a straigh
	bool Straight()
	{
		for (int x = 0; x < player->getHandCount(); x++)
		{
			int n = 0;
			for (int i = 0; i < 5; i++)
			{
				test[i] = hand2[x]->getValue() + i;
			}
			
				int CardCount = 0;
				for (int i = 0; i < 5;i++)
				{
					for (int j = 0; j < player->getHandCount(); j++)
					{
						if (n < 5)
						{
							if (hand2[j]->getValue() == test[n])
							{
								CardCount++;
								n++;
							}
						}
						
						
					}
					
					
				}
				if (CardCount == 5)
				{
					return true;
				}
			}
		return false;
	}
	// checks to see if there are three of a kind
	bool ThreeOfAKind()
	{
		int CardCount = 0;
		for (int i = 0; i < player->getHandCount(); i++)
		{
			CardCount = 0;
			for (int j = 0; j < player->getHandCount(); j++)
			{
				if (i != j)
				{
					if (hand2[i]->getValue() == hand2[j]->getValue())
					{
						CardCount++;
					}
					if (CardCount == 2)
					{
						tieBreaker = hand2[i];
						return true;
					}
					
				}
			}
		}
		return false;
	}
	// checks to see if there are 2 pairs
	bool TwoPairs()
	{
		Card^ pair1;
		int CardCount = 0;
		int CardCount2 = 0;
		for (int i = 0; i < player->getHandCount(); i++)
		{
			CardCount = 0;
			for (int j = 0; j < player->getHandCount(); j++)
			{
				if (i != j && hand2[j] != pair1)
				{
					
						if (hand2[i]->getValue() == hand2[j]->getValue())
						{
							CardCount++;
						}
						if (CardCount == 1 && CardCount2 == 0)
						{
							pair1 = hand2[i];
							CardCount2 = CardCount;
							CardCount = 0;
						}
						if (CardCount == 1 && CardCount2 == 1)
						{
							tieBreaker = hand2[i];
							return true;
						}
					
				}
			}
		}
		return false;
	}
	// checks to see if there are any pairs
	bool Pairs()
	{

		for (int i = 0; i < player->getHandCount(); i++)
		{
			int CardCount = 0;
			for (int j = 0; j < player->getHandCount(); j++)
			{
				if (i != j)
				{
					if (hand2[i]->getValue() == hand2[j]->getValue())
					{
						CardCount++;
					}
					if (CardCount == 1)
					{
						tieBreaker = hand2[j];
						return true;
					}

				}
			}
		}
		return false;
	}
	// checks to see what the highest card is
	int HighCard()
	{
		int x = 0;
		for (int i = 0; i < 2; i++)
		{
			if (hand2[i]->getValue()==0)
			{
				return 14;
			}
			else if (x < hand2[i]->getValue())
			{
				x = hand2[i]->getValue();
			}
		}
		return x+1;
	}
	// assigns values to each hand
	int HandValue()
	{
		if (player->getHasFold())
		{
			return 0;
		}
		else if(RoyalFlush()==true)
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
	void setPlayerValue()
	{
		setHand();
		player->setHandValue(HandValue());
	}
	int getTieBreaker()
	{
		return tieBreaker->getValue();
	}
};