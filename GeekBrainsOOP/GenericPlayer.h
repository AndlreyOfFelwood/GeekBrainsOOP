#pragma once
#include <iostream>
#include <string>
#include "Hand.h"

class GenericPlayer : public Hand
{
    friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);

public:
    GenericPlayer(const std::string& name = "");

    virtual ~GenericPlayer();

    // показывает, хочет ли игрок продолжать брать карты
    // для класса GenericPlayer функци¤ не имеет своей реализации,
    // т.к. для игрока и дилера это будут разные функции
    virtual bool isHitting() const = 0;

    // возвращает значение, если игрок имеет перебор -
    // сумму очков большую 21
    // данная функция не виртуальная, т.к. имеет одинаковую реализацию
    // для игрока и дилера
    bool isBusted() const;

    // объявляет, что игрок имеет перебор
    // функци¤ одинакова как дл¤ игрока, так и дл¤ дилера
    void bust() const;

protected:
    std:: string m_name;
};

std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);