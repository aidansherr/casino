#pragma once
#include "Player.h"
#include "Card.h"
ref class Logic
{private:
	array <Card^, 1>^hand2 = gcnew array<Card^, 1>(8);
	array <int, 1>^test = gcnew array<int, 1>(5);
	Player^ player;
public:
	Logic()
	{
		for (int i = 0; i < 7; i++)
		{
			hand2[i] = player->getHand();
		}
		
	}
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
};