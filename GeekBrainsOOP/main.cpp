#include <iostream>
#include <vector>
#include <algorithm>
#include <clocale>
#include "Ex.h"

using namespace std;

//task1
template<typename T1, typename T2>
double div(T1& first, T2& second)
{
	if (second == 0)
		throw "DivisionByZero";

	return static_cast<double>(first) / second;
}


int main()
{
	setlocale(LC_ALL, "rus");

	unsigned short f = 22;
	double s = 0;

	cout << "\t\tFirst task\n\n";
	try
	{
		cout << div(f, s) << endl;
		cout << "The string to be output after division" << endl;
	}
	catch (const char* exception)
	{
		cerr << "Error: " << exception << endl;
	}
	cout << "\t\tEnd first task\n\n";


	cout << "\t\tSecond task\n\n";

	Bar<int> bar;
	int n;

	try
	{
		do
		{
			cout << "Enter integer number \"n\"\n";
			cin >> n;
			bar.set(n);

		} while (n != 0);
	}
	catch (Ex<int>& e)
	{
		cout << "Error: " << e._x << endl;
	}

	cout << "\t\tEnd second task\n\n";


	cout << "\t\tThird task\n\n";

	Robot robot;
	
	string direction = "right";
	robot.printField();


	while (direction != "exit")
	{
		cout << "\nВведите направление перемещения (left|right|up|down) или exit для выхода из программы\n\n";

		cin >> direction;
		try
		{
			robot.move(direction);
		}
		catch (IllegalCommand& e)
		{
			cerr << e.getError() << endl;
		}
		catch (OffTheField& e)
		{
			cerr << e.getError() << endl;
			cerr << "Текущая позиция - [" << e.getX() << "][" << e.getY() << "]\n";
		}
		
	}

	cout << "\t\tEnd third task\n\n";
	return 0;
}