#pragma once
#include <string>
#include "Deck.h"
#include "House.h"
#include "Player.h"


class Game
{
public:
    Game(const std::vector<std::string>& names);

    ~Game();

    void play();

private:
    Deck m_deck;
    House m_house;
    std::vector<Player> m_players;
};