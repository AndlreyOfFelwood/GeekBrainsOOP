#pragma once
#include <iostream>

using namespace std;

class Fruit
{
private:
	string _name;
	string _color;

public:
	Fruit();
	void setName(string name);
	void setColor(string color);
	string getName();
	string getColor();
};


class Apple : public Fruit
{
public:
	Apple(string color);
};

class Banana : public Fruit
{
public:
	Banana();
};


class GrannySmith : public Apple
{
public:
	GrannySmith();
};