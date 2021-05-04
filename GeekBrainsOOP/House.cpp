#include "House.h"


bool House::IsHitting() const
{
	return (getValue() <= 16);
}

void House::FlipFirstCard()
{
	getHand().at(0)->flip();
}
