#include <iostream>
#include <cstdint>
#include <cmath>
#include "Person.h"
#include "Fruit.h"

using namespace std;

size_t Student::_studentsCount = 0;

int main()
{
	setlocale(0, "");

	Student anton("Антон", 18, 70, 1), andrey("Андрей", 20, 80, 3), sergey("Сергей", 23, 100, 6);

	Apple a("red");
	Banana b;
	GrannySmith c;


	unsigned short taskNum;

	do
	{
		cout << "\nВведите номер задания (1-3) или 0 для выхода из программы.\n\n";
		cin >> taskNum;

		switch (taskNum)
		{
		case 1:
			andrey.cOutStudent();
			break;
		case 2:
			cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
			cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
			cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

			break;
		default:
			break;
		}

	} while (taskNum != 0);



	return 0;
}