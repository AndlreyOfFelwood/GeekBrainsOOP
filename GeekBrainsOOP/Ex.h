#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<class T>
class Ex
{
public:
	T _x;
	Ex(T x)
		: _x(x) 
	{};

};


template<class T>
class Bar
{
private:
	T _y;
public:
	Bar(T y = 0)
		: _y(y)
	{};
	void set(T& a)
	{
		if (_y + a > 100)
			throw Ex<T>(a * _y);

		_y = a;
	}
};

struct Position
{
	unsigned short	xPos = 0,
					yPos = 0;
};

enum class Direction
{
	LEFT, 
	RIGHT,
	UP,
	DOWN
};

typedef Direction dir;
typedef Position pos;

class Robot
{
private:
	const vector<string> _directions = { "left", "right", "up", "down" };
	pos _position;
	char _field[10][10];
public:
	Robot();
	void move(const string& d);
	void printField();
};


class OffTheField
{
private:
	pos m_pos;
	string m_direction;
public:
	OffTheField(const pos& pos, const string& direction)
		: m_pos(pos), m_direction(direction)
	{ }
	const string getError();
	const unsigned short getX();
	const unsigned short getY();

};

class IllegalCommand
{
private:
	string m_command;
public:
	IllegalCommand(const string command)
		: m_command(command)
	{ }
	const string getError();

};