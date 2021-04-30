#pragma once
#include <iostream>
#include "Hand.h"


class GenericPlayer :
    public Hand
{
private:
    std::string _name;
public:
    GenericPlayer(std::string name = "Игрок")
        :_name(name) {};
    virtual bool IsHitting() = 0;
    bool IsBoosted(Hand& h);
    void Bust();
};

