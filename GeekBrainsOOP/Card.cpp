#include "Card.h"

using namespace std;

Card::Card(rank r, suit s, bool ifu)
    : m_rank(r), m_suit(s), m_isFaceUp(ifu) {
}

unsigned short Card::getValue() const
{
    unsigned short value = 0;
    if (m_isFaceUp)
    {
        value = static_cast<unsigned short>(m_rank);
        if (value > 10)
            value = 10;
    }
    return value;
}

ostream& operator<<(ostream& os, const Card& aCard)
{
    const string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9",
        "10", "J", "Q", "K" };
    const string SUITS[] = { "c", "d", "h", "s" };

    if (aCard.m_isFaceUp)
    {
        os << RANKS[static_cast<unsigned short>(aCard.m_rank)] << SUITS[static_cast<unsigned short>(aCard.m_suit)];
    }
    else
    {
        os << "XX";
    }

    return os;
}