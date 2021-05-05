#pragma once
#include <string>
#include <vector>

using namespace std;

class Date
{
private:
	vector<string> _months = { "January", "january", "February", "february", "March", "march", "April", "april", "May", "may", "June", "june", "July", "july", "August", "august", "September", "september", "October", "october", "November", "november", "December", "december", };
	unsigned short int _day;
	string _month;
	unsigned short int _year;
public:
	Date(unsigned short int day = 1, string month = "january", unsigned short int year = 1970)
		: _day(day), _month(month), _year(year) {};
	unsigned short int getDay() const;
	unsigned short int getYear() const;
	string getMonth() const;
	void setDay(unsigned short int day);
	void setMonth(string month);
	void setYear(unsigned short int year);
};

