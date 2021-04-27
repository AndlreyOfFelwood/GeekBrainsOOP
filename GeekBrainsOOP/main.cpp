#include <iostream>
#include <cstdint>
#include <vector>
#include "ArrayInt.h"
#include "Hand.h"
#include "Card.h"

using namespace std;

int checkDif(vector<int> vec)
{
	sort(begin(vec), end(vec));
	int count = unique(begin(vec), end(vec)) - begin(vec);
	return count;
}

int main()
{
	setlocale(0, "");

	ArrayInt MyArr(10);
	MyArr.init();

	const int vSize = 10;
	vector<int> v(vSize);

	vector<Card*> hand;
	hand.push_back(new Card(Value::TWO, Suit::DIAMONDS));
	hand.push_back(new Card(Value::FIVE, Suit::CLOVERS));
	hand.push_back(new Card(Value::ACE, Suit::SPADES));
	hand.push_back(new Card(Value::THREE, Suit::HEARTS));
	Hand myHand(hand);

	unsigned short taskNum;

	do
	{
		cout << "\nВведите номер задания (1-3) или 0 для выхода из программы.\n\n";
		cin >> taskNum;

		switch (taskNum)
		{
		case 1:
			MyArr.print();
			MyArr.pop_back();
			MyArr.print();
			MyArr.pop_front();
			MyArr.print();
			MyArr.arrSort();
			MyArr.print();
			break;
		case 2:
			for (size_t i = 0; i < vSize; i++)
				v[i] = rand() % vSize;

			cout << "Массив: \n";

			for (int i = 0; i < vSize; i++)
				cout << v[i] << ' ';

			cout << endl;

			cout << checkDif(v);
			break;
		case 3:
			cout << myHand.getValue();
			break;
		default:
			break;
		}

	} while (taskNum != 0);



	return 0;
}