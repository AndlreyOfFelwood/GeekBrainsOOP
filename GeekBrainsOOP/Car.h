#pragma once
#include <iostream>

using namespace std;

class Car
{
protected:
	string company;
	string model;
public:
	Car();
};

class PassengerCar : virtual public Car
{
public:
	PassengerCar();
};

class Bus : virtual public Car
{
public:
	Bus();
};

class Minivan : public PassengerCar, public Bus
{
public:
	Minivan();
};