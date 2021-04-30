#pragma once
#include <iostream>

template <class T>
class Pair1
{
private:
	T _first;
	T _second;
public:
	Pair1(T first, T second)
		:_first(first), _second(second) {};

	T first() const;
	T second() const;
};

template <typename T>
T Pair1<T>::first() const
{
	return _first;
}

template <typename T>
T Pair1<T>::second() const
{
	return _second;
}



template <class T, class U>
class Pair
{
private:
	T _first;
	U _second;
public:
	Pair(T first, U second)
		:_first(first), _second(second) {};

	T first() const;
	U second() const;
};

template <typename T, typename U>
T Pair<T, U>::first() const
{
	return _first;
}

template <typename T, typename U>
U Pair<T, U>::second() const
{
	return _second;
}



template <class T>
class StringValuePair
{
private:
	std::string _first;
	T _second;
public:
	StringValuePair(std::string first, T second)
		:_first(first), _second(second) {};

	std::string first() const;
	T second() const;
};

template <typename T>
std::string StringValuePair<T>::first() const
{
	return _first;
}

template <typename T>
T StringValuePair<T>::second() const
{
	return _second;
}