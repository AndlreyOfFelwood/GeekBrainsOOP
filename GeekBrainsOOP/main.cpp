#include <iostream>
#include <cstdint>
#include <cmath>
#include "Figure.h"
#include "Car.h"
#include "Fraction.h"

using namespace std;

Fraction operator+(const Fraction& d1, const Fraction& d2)
{
	int newNum, newDenom;

	newNum = d1.getNumerator() * d2.getDenominator() + d2.getNumerator() * d1.getDenominator();
	newDenom = d1.getDenominator() * d2.getDenominator();

	return Fraction(newNum, newDenom);
}

Fraction operator-(const Fraction& d1, const Fraction& d2)
{
	int newNum, newDenom;

	newNum = d1.getNumerator() * d2.getDenominator() - d2.getNumerator() * d1.getDenominator();
	newDenom = d1.getDenominator() * d2.getDenominator();

	return Fraction(newNum, newDenom);
}

Fraction operator*(const Fraction& d1, const Fraction& d2)
{
	int newNum, newDenom;

	newNum = d1.getNumerator() * d2.getNumerator();
	newDenom = d1.getDenominator() * d2.getDenominator();

	return Fraction(newNum, newDenom);
}

Fraction operator/(const Fraction& d1, const Fraction& d2)
{
	int newNum, newDenom;

	newNum = d1.getNumerator() * d2.getDenominator();
	newDenom = d1.getDenominator() * d2.getNumerator();

	return Fraction(newNum, newDenom);
}

bool operator==(const Fraction& d1, const Fraction& d2)
{
	return ((double)d1.getNumerator() / d1.getDenominator()) == ((double)d2.getNumerator() / d2.getDenominator());
}

bool operator!=(const Fraction& d1, const Fraction& d2)
{
	return (d1 == d2) ? false : true;
}

bool operator<(const Fraction& d1, const Fraction& d2)
{
	return (d1.getNumerator() * d2.getDenominator()) < (d2.getNumerator() * d1.getDenominator());
}

bool operator>(const Fraction& d1, const Fraction& d2)
{
	return (d1.getNumerator() * d2.getDenominator()) > (d2.getNumerator() * d1.getDenominator());
}

bool operator>=(const Fraction& d1, const Fraction& d2)
{
	return !(d1 < d2);
}

bool operator<=(const Fraction& d1, const Fraction& d2)
{
	return !(d1 > d2);
}

int main()
{
	setlocale(0, "");

	// ������ �������
	Parallelogram parallelogram(5, 8, 30);
	Circle circle(10);
	Rectangle rectangle(6, 10);
	Square square(12);
	Rhombus rhombus(4);

	// ������ �������
	Car car;
	PassengerCar pCar;
	Bus bus;
	Minivan minivan;

	// ������ �������
	Fraction dr1(3, 4), dr2(2, 8);

	Fraction sum = dr1 + dr2;
	Fraction dif = dr1 - dr2;
	Fraction multi = dr1 * dr2;
	Fraction div = dr1 / dr2;
	Fraction rev = -dr1;
	bool equal = dr1 == dr2;
	bool notEqual = dr1 != dr2;
	bool more = dr1 > dr2;
	bool less = dr1 < dr2;
	bool mEqual = dr1 >= dr2;
	bool lEqual = dr1 <= dr2;

	unsigned short taskNum;

	do
	{
		cout << "\n������� ����� ������� (1-3) ��� 0 ��� ������ �� ���������.\n\n";
		cin >> taskNum;

		switch (taskNum)
		{
		case 1:
			cout << "������� ���������������: " << parallelogram.area() << endl;
			cout << "������� �����: " << circle.area() << endl;
			cout << "������� ��������������: " << rectangle.area() << endl;
			cout << "������� ��������: " << square.area() << endl;
			cout << "������� �����: " << rhombus.area() << endl;
			break;
		case 2:
			break;
		case 3:
			cout << "��������� �����: \n"
				<< dr1.getNumerator() << "/" << dr1.getDenominator() << " � " << dr2.getNumerator() << "/" << dr2.getDenominator() << endl;

			cout << "��������� �������� ������: " << sum.getNumerator() << "/" << sum.getDenominator() << endl;
			cout << "��������� ��������� ������: " << dif.getNumerator() << "/" << dif.getDenominator() << endl;
			cout << "��������� ��������� ������: " << multi.getNumerator() << "/" << multi.getDenominator() << endl;
			cout << "��������� ������� ������: " << div.getNumerator() << "/" << div.getDenominator() << endl;
			cout << "��������� \"���������\" �����: " << rev.getNumerator() << "/" << rev.getDenominator() << endl;
			cout << "��������� ������: " << equal << endl;
			cout << "����������� ������: " << notEqual << endl;
			cout << "������ ����� ������ ������: " << more << endl;
			cout << "������ ������ ������: " << less << endl;
			cout << "������ ����� ������ ���� ����� ������: " << mEqual << endl;
			cout << "������ ����� ������ ���� ����� ������: " << lEqual << endl;
			break;
		default:
			break;
		}

	} while (taskNum != 0);



	return 0;
}