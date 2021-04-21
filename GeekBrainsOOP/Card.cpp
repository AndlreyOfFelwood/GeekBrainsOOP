#include "Card.h"

void Card::flip()
{
	_cardFace = !_cardFace;
}

Value Card::getValue()
{
	return _value;
}