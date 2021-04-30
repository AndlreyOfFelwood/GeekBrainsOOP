#pragma once
#include <iostream>
#include <vector>
#include"Card.h"

using namespace std;

class Hand
{
protected:
	vector<Card*> _hand;
public:
	Hand() {};
	Hand(vector<Card*> &hand)
		:_hand(hand) {};
	void add(Card* card);
	void clear();
	unsigned short int getValue() const;
	vector<Card*> getHand() const;
};

