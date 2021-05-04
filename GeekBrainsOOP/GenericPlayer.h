#pragma once
#include <iostream>
#include "Hand.h"


class GenericPlayer :
    public Hand
{
    friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);
private:
    std::string _name;
public:
    GenericPlayer(std::string name = "Игрок")
        :_name(name) {};
    virtual bool IsHitting() = 0;
    bool IsBoosted();
    void Bust();
    std::string getName() const;
};

