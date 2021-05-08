#pragma once
#include "GenericPlayer.h"

class Player : public GenericPlayer
{
public:
    Player(const std::string& name = "");

    // показывает, хочет ли игрок продолжать брать карты
    bool isHitting() const override;

    // объявляет, что игрок победил
    void win() const;

    // объявляет, что игрок проиграл
    void lose() const;

    // объявляет ничью
    void push() const;
};
