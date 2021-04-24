#pragma once
class Figure
{
public:
	Figure() {}
	virtual double area() = 0;
};


class Parallelogram : virtual public Figure
{
protected:
	unsigned short _sideA;
	unsigned short _sideB;
	unsigned short _angel;
public:
	Parallelogram(unsigned short sideA = 0, unsigned short sideB = 0, unsigned short angel = 0)
		: _sideA(sideA), _sideB(sideB), _angel(angel)
	{}

	double area();
};


class Circle : virtual public Figure
{
private:
	unsigned short _radius;
public:
	Circle(unsigned short radius = 0)
		: _radius(radius)
	{}

	double area();
};


class Rectangle : public Parallelogram
{
public:
	Rectangle(unsigned short sideA = 0, unsigned short sideB = 0)
		: Parallelogram(sideA, sideB, 90)
	{}

	double area();
};


class Square : public Parallelogram
{
public:
	Square(unsigned short sideA = 0)
		: Parallelogram(sideA, sideA, 90)
	{}

	double area();
};


class Rhombus : public Parallelogram
{
public:
	Rhombus(unsigned short sideA = 0, unsigned short angel = 45)
		: Parallelogram(sideA, sideA, angel)
	{}
};