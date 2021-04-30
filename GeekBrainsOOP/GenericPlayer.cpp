#include "GenericPlayer.h"
#include <iostream>

bool GenericPlayer::IsBoosted()
{
	return getValue() > 21;
}

void GenericPlayer::Bust()
{
	cout << "У игрока " << _name << "перебор!\n";
}

std::string GenericPlayer::getName() const
{
	return _name;
}
