#pragma once
#include <iostream>

class Card
{
public:
    enum class rank {
        ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
        JACK, QUEEN, KING
    };
    enum class suit { CLUBS, DIAMONDS, HEARTS, SPADES };

    Card(rank r = rank::ACE, suit s = suit::SPADES, bool ifu = true);

    unsigned short getValue() const;
    void flip() { m_isFaceUp = !(m_isFaceUp); }

    friend std::ostream& operator<<(std::ostream& os, const Card& aCard);

private:
    rank m_rank;
    suit m_suit;
    bool m_isFaceUp;
};

std::ostream& operator<<(std::ostream& os, const Card& aCard);