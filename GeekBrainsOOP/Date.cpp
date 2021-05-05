#include "Date.h"

unsigned short int Date::getDay() const
{
	return _day;
}

unsigned short int Date::getYear() const
{
	return _year;
}

string Date::getMonth() const
{
	return _month;
}

void Date::setDay(unsigned short int day)
{
	if (day > 0 && day < 32)
		_day = day;
}

void Date::setMonth(string month)
{
	for (auto m: _months)
	{
		if (month == m) {
			_month = month;
			break;
		}
	}
}

void Date::setYear(unsigned short int year)
{
	_year = year;
}
