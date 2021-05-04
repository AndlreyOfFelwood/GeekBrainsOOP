#include <iostream>
#include <limits>
#include "Player.h"


bool Player::IsHitting() const
{
	cout << "����� ��� �����?(������� y/n)\n";
	while (true)
	{
		char answer;
		std::cin >> answer;

		if (std::cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize> ::max(), '\n');
		}
		else if (answer == 'y' || answer == 'Y')
			return true;
		else if(answer == 'n' || answer == 'N')
			return false;
	}
}

void Player::Win() const
{
	cout << getName() << " �������!\n";
}

void Player::Lose() const
{
	cout << getName() << " ��������.\n";
}

void Player::Push() const
{
	cout << getName() << " ������ � �����.\n";
}