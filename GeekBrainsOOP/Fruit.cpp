#include "Fruit.h"

Fruit::Fruit()
{
	setName("Фрукт");
	setColor("Цвет");
}

void Fruit::setName(string name)
{
	_name = name;
}

void Fruit::setColor(string color)
{
	_color = color;
}

string Fruit::getName()
{
	return _name;
}

string Fruit::getColor()
{
	return _color;
}

Apple::Apple(string color = "red")
{
	setName("Apple");
	setColor(color);
}

Banana::Banana()
{
	setName("Banana");
	setColor("yellow");
}

GrannySmith::GrannySmith()
{
	setName("Granny Smith apple");
	setColor("green");
}