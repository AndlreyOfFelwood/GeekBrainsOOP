#include "Person.h"

void Person::setName(string name)
{
	_name = name;
}

void Person::setAge(unsigned short age)
{
	_age = age;
}

void Person::setWeight(unsigned short weight)
{
	_weight = weight;
}

string Person::getName()
{
	return _name;
}

unsigned short Person::getAge()
{
	return _age;
}

unsigned short Person::getWeight()
{
	return _weight;
}

/// <summary>
/// ����������� ������ Student
/// </summary>
/// <param name="name"> - ��� �������� (string)</param>
/// <param name="age"> - ������� �������� (unsigned short)</param>
/// <param name="weight"> - ��� �������� (unsigned short)</param>
/// <param name="yearOfStudy"> - ��� �������� (unsigned short)</param>
Student::Student(string name, unsigned short age, unsigned short weight, unsigned short yearOfStudy = 1)
{
	setName(name);
	setAge(age);
	setWeight(weight);
	setStudyYear(yearOfStudy);
	increaseStudentsCount();
}

void Student::setStudyYear(unsigned short yearOfStudy)
{
	_yearOfStudy = yearOfStudy;
}

void Student::increaseStudyYear()
{
	_yearOfStudy++;
}

void Student::increaseStudentsCount()
{
	_studentsCount++;
}

void Student::decreaseStudentsCount()
{
	_studentsCount--;
}

void Student::cOutStudent()
{
	cout << "���: " << getName() << endl;
	cout << "�������: " << getAge() << endl;
	cout << "���: " << getWeight() << endl;
	cout << "��� ��������: " << _yearOfStudy << endl;
	cout << "���������� ���������: " << _studentsCount << endl;
}