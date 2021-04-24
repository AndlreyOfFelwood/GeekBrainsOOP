#pragma once

enum class Suit
{
	DIAMONDS,
	CLOVERS,
	HEARTS,
	SPADES
};

enum class Value
{
	TWO = 2,
	THREE = 3,
	FOUR = 4,
	FIVE = 5, 
	SIX = 6,
	SEVEN = 7,
	EIGHT = 8,
	NINE = 9,
	TEN = 10,
	JACKET = 10,
	QUEEN = 10,
	KING = 10,
	ACE = 1
};

class Card
{
private:
	Suit _suit;
	Value _value;
	bool _cardFace;
public:
	void flip();
	Value getValue();
};