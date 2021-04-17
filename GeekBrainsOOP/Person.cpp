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
/// Конструктор класса Student
/// </summary>
/// <param name="name"> - имя студента (string)</param>
/// <param name="age"> - возраст студента (unsigned short)</param>
/// <param name="weight"> - вес студента (unsigned short)</param>
/// <param name="yearOfStudy"> - год обучения (unsigned short)</param>
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
	cout << "Имя: " << getName() << endl;
	cout << "Возраст: " << getAge() << endl;
	cout << "Вес: " << getWeight() << endl;
	cout << "Год обучения: " << _yearOfStudy << endl;
	cout << "Количество студентов: " << _studentsCount << endl;
}