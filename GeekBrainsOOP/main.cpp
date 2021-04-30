#include <iostream>
#include <limits>
#include <iomanip>
#include "Card.h"
#include "GenericPlayer.h"

using namespace std;

void cIn(int& var)
{
	do
	{
		if (cin.fail())
		{
			cout << "Ошибка, введите ЦЕЛОЕ ЧИСЛО!\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize> ::max(), '\n');
		}
		else
			cout << "Введите целое число:\n";

		cin >> var;
	} while (cin.fail());
}

ostream& endll(ostream& stream)
{
	stream << "\n\n";
	clog.clear();
	return stream;
}

ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer)
{
	os << aGenericPlayer._name << ":\t";

	vector<Card*>::const_iterator pCard;
	if (!aGenericPlayer._hand.empty())
	{
		for (pCard = aGenericPlayer._hand.begin();
			pCard != aGenericPlayer._hand.end();
			++pCard)
		{
			os << *(*pCard) << "\t";
		}


		if (aGenericPlayer.getValue() != 0)
		{
			cout << "(" << aGenericPlayer.getValue() << ")";
		}
	}
	else
	{
		os << "<empty>";
	}

	return os;
}


ostream& operator<<(ostream& os, const Card& aCard)
{
	const string RANKS[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
	const string SUITS[] = { "c", "d", "h", "s" };

	if (aCard._cardFace)
	{
		os << RANKS[static_cast<int>(aCard._value)] << SUITS[static_cast<int>(aCard._suit)];
	}
	else
	{
		os << "XX";
	}

	return os;
}

int main()
{
	setlocale(0, "");

	int task1;

	unsigned short taskNum;

	do
	{
		cout << "\nВведите номер задания (1-3) или 0 для выхода из программы.\n\n";
		cin >> taskNum;

		switch (taskNum)
		{
		case 1:
			cIn(task1);
			cout << "Введено число " << task1 << endl; 
			cin.clear();
			cin.ignore(numeric_limits<streamsize> ::max(), '\n');
			break;
		case 2:
			cout << "Вывод" << endll << "через" << endll << "двойной" << endll << "перевод" << endll << "строки" << endl;
			break;
		case 3:
			break;
		default:
			break;
		}

	} while (taskNum != 0);



	return 0;
}