#include "Fraction.h"
#include <iostream>

Fraction::Fraction(int numerator, int denominator)
{
	_numerator = numerator;

	if (denominator == 0) 
	{
		std::cout << "0 не может быть знаменателем!\n";
		_denominator = 1;
	}
	_denominator = denominator;
}

int Fraction::getNumerator() const
{
	return _numerator;
}

int Fraction::getDenominator() const
{
	return _denominator;
}

