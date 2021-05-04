#pragma once
#include <iostream>

using namespace std;

enum class Suit
{
	CLOVERS,
	DIAMONDS,
	HEARTS,
	SPADES
};

enum class Value
{
	ACE = 1,
	TWO,
	THREE,
	FOUR,
	FIVE, 
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACKET,
	QUEEN,
	KING
};

class Card
{
private:
	Suit _suit;
	Value _value;
	bool _cardFace;
public:
	Card(Value value, Suit suit, bool cardFace = false)
		: _value(value), _suit(suit), _cardFace(cardFace) {}
	void flip();
	Value getValue();
	friend ostream& operator<<(ostream& os, const Card& aCard);
};