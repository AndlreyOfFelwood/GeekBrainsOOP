#include "Ex.h"
#include <string>


Robot::Robot()
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			_field[i][j] = 'O';

	_field[0][0] = 'X';
}

void Robot::move(const string& d)
{
	if (find(_directions.begin(), _directions.end(), d) == _directions.end())
		throw IllegalCommand(d);

	if (d == "down")
	{
		if (_position.yPos + 1 >= 10)
			throw OffTheField(_position, d);

		_field[_position.yPos][_position.xPos] = 'O';
		_position.yPos++;
		_field[_position.yPos][_position.xPos] = 'X';
	}
	else if (d == "left")
	{
		if (_position.xPos - 1 < 0)
			throw OffTheField(_position, d);

		_field[_position.yPos][_position.xPos] = 'O';
		_position.xPos--;
		_field[_position.yPos][_position.xPos] = 'X';
	}
	else if (d == "right")
	{
		if (_position.xPos + 1 >= 10)
			throw OffTheField(_position, d);

		_field[_position.yPos][_position.xPos] = 'O';
		_position.xPos++;
		_field[_position.yPos][_position.xPos] = 'X';
	}
	else if (d == "up")
	{
		if (_position.yPos - 1 < 0)
			throw OffTheField(_position, d);

		_field[_position.yPos][_position.xPos] = 'O';
		_position.yPos--;
		_field[_position.yPos][_position.xPos] = 'X';
	}

	system("cls");
	this->printField();
}

void Robot::printField()
{
	cout << "\t\t-----------------------------------------" << endl;
	for (size_t i = 0; i < 10; i++)
	{
		cout << "\t\t|";
		for (size_t j = 0; j < 10; j++)
		{
			cout << " " << static_cast<char>(_field[i][j]) << " |";
		}
		cout << endl;
		if (i + 1 < 10)
			cout << "\t\t-----------------------------------------" << endl;
	}
}

const string OffTheField::getError()
{
	if (m_direction == "left")
		return "Выход за пределы поля - невозможно переместиться левее";
	else if (m_direction == "right")
		return "Выход за пределы поля - невозможно переместиться правее";
	else if (m_direction == "up")
		return "Выход за пределы поля - невозможно переместиться выше";
	else
		return "Выход за пределы поля - невозможно переместиться ниже";
}

const unsigned short OffTheField::getX()
{
	return m_pos.xPos;
}
const unsigned short OffTheField::getY()
{
	return m_pos.yPos;
}

const string IllegalCommand::getError()
{
	return m_command + " - недоступная команда";
}
