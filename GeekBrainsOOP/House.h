#pragma once
#include "GenericPlayer.h"
class House :
    public GenericPlayer
{
private:

public:
    House(const string& name = "House");
    virtual bool IsHitting() const;
    void FlipFirstCard();
};
