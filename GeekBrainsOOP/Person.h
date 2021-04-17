#pragma once
#include <iostream>

using namespace std;

enum class Gender
{
	MALE,
	FEMALE
};

class Person
{
private:
	string _name;
	unsigned short _age;
	unsigned short _weight;
	Gender _gender;

public:
	void setName(string name);
	void setAge(unsigned short age);
	void setWeight(unsigned short weight);
	string getName();
	unsigned short getAge();
	unsigned short getWeight();
};


class Student : public Person
{
private:
	unsigned short _yearOfStudy;
	static size_t _studentsCount;
public:
	Student(string name, unsigned short age, unsigned short weight, unsigned short yearOfStudy);
	void setStudyYear(unsigned short yearOfStudy);
	void increaseStudyYear();
	void increaseStudentsCount();
	void decreaseStudentsCount();
	void cOutStudent();
};