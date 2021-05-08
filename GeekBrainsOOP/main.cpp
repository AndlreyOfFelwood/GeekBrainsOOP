#include <iostream>
#include <clocale>
#include <limits>
#include <chrono>
#include <ctime>
#include "Date.h"
#include "Game.h"

using namespace std;


ostream& operator<<(ostream& os, const unique_ptr<Date>& aDate)
{
	os << "День: " << aDate->getDay() << endl;
	os << "Месяц: " << aDate->getMonth() << endl;
	os << "Год: " << aDate->getYear() << endl;

	return os;
}

int main()
{
	setlocale(LC_ALL, "rus");

	/*
	* First task
	*/
	unique_ptr<Date> today = make_unique<Date>();
	unique_ptr<Date> date = make_unique<Date>();

	today->setDay(5);
	today->setMonth("may");
	today->setYear(2021);
	cout << today << endl;
	date = move(today);
	if (date)
		cout << "date не nullptr" << endl;
	else
		cout << "date = nullptr" << endl;

	if (today)
		cout << "today не nullptr" << endl;
	else
		cout << "today = nullptr" << endl;

	/*
	* End first task
	*/


	/*
	* Blackjack
	*/
	int numPlayers = 0;
	vector<string> names;
	string name; 
	char again = 'y';

	cout << "\t\tWelcome to Blackjack!\n\n";

	while (numPlayers < 1 || numPlayers > 7)
	{
		cout << "How many players? (1 - 7): ";
		cin >> numPlayers;
	}

	for (int i = 0; i < numPlayers; ++i)
	{
		cout << "Enter player name: ";
		cin >> name;
		names.push_back(name);
	}
	cout << endl;

	Game aGame(names);

	while (again != 'n' && again != 'N')
	{
		aGame.play();
		cout << "\nDo you want to play again? (Y/N): ";
		cin >> again;
	}

	return 0;
}