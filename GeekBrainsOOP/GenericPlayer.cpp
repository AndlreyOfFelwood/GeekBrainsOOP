#include "GenericPlayer.h"
#include <iostream>

bool GenericPlayer::IsBoosted()
{
	return _hand.getValue() > 21;
}

void GenericPlayer::Bust()
{
	cout << "� ������ " << _name << "�������!\n";
}