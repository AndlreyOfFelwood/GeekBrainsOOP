#include <iostream>
#include <cstdint>
#include <vector>
#include "Pair.h"

using namespace std;

int main()
{
	setlocale(0, "");

	Pair1<int> p1(6, 9);
	const Pair1<double> p2(3.4, 7.8);

	Pair<int, double> pp1(6, 7.8);
	const Pair<double, int> pp2(3.4, 5);

	StringValuePair<int> svp("Amazing", 7);


	unsigned short taskNum;

	do
	{
		cout << "\n¬ведите номер задани€ (1-3) или 0 дл€ выхода из программы.\n\n";
		cin >> taskNum;

		switch (taskNum)
		{
		case 1:
			cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
			cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
			break;
		case 2:
			cout << "Pair: " << pp1.first() << ' ' << pp1.second() << '\n';
			cout << "Pair: " << pp2.first() << ' ' << pp2.second() << '\n';
			break;
		case 3:
			std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
			break;
		default:
			break;
		}

	} while (taskNum != 0);



	return 0;
}