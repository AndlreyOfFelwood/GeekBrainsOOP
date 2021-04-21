#pragma once
class Fraction
{
private:
	int _numerator;
	int _denominator;
public:
	Fraction(int numerator = 1, int denominator = 1);
	int getNumerator() const;
	int getDenominator() const;

	Fraction operator- () const
	{
		return Fraction(-_numerator, _denominator);
	}
};