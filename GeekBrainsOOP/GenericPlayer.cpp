#include "GenericPlayer.h"
#include <iostream>

bool GenericPlayer::IsBoosted(Hand& h)
{
	return h.getValue() > 21;
}

void GenericPlayer::Bust()
{
	cout << "У игрока " << _name << "перебор!\n";
}