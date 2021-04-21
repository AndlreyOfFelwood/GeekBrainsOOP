#include "Figure.h"
#include <iostream>
#include <cmath>

const double PI = 3.1415926535;

double Parallelogram::area()
{
	return _sideA * _sideB * sin(_angel * PI / 180);
}

double Circle::area()
{
	return PI * _radius * _radius;
}

double Rectangle::area()
{
	return _sideA * _sideB;
}

double Square::area()
{
	return _sideA * _sideA;
}