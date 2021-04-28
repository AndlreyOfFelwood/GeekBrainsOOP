#pragma once
#include <iostream>
#include "Hand.h"


class GenericPlayer :
    public Hand
{
private:
    std::string _name;
    Hand& _hand;
public:
    GenericPlayer(Hand& h)
        :_hand(h) {};
    virtual bool IsHitting() = 0;
    bool IsBoosted();
    void Bust();
};

