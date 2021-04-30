#include "Hand.h"

void Hand::add(Card* card)
{
	_hand.push_back(card);
}

void Hand::clear()
{
	for (Card* ñ : _hand)
		delete ñ;
	_hand.clear();
}

unsigned short int Hand::getValue() const
{
	unsigned short int value = 0;
	unsigned short int aceCount = 0;
	bool ace = false;

	for (size_t i = 0; i < _hand.size(); i++)
	{
		if (static_cast<unsigned short int>(_hand[i]->getValue()) == 1)
		{
			ace = true;
			aceCount++;
			continue;
		}

		value += static_cast<unsigned short int>(_hand[i]->getValue());
	}

	if (ace)
		for (size_t i = 1; i <= aceCount; i++)
		{
			value += (value >= 11) ? 1 : 11;
		}

	return value;
}

vector<Card*> Hand::getHand() const
{
	return _hand;
}
