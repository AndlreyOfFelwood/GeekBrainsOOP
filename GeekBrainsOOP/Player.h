#pragma once
#include "GenericPlayer.h"
class Player :
    public GenericPlayer
{
private:

public:
    bool IsHitting() const;
	void Win() const;
	void Lose() const;
	void Push() const;
};