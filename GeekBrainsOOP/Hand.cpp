#include "Hand.h"
void Hand::add(Card* pCard)
{
    m_cards.push_back(pCard);
}

void Hand::clear()
{
    // проходит по вектору, освобождая всю память в куче
    for (auto i : m_cards)
    {
        delete i;
    }
    m_cards.clear();
}


int Hand::getTotal() const
{
    // если карт в руке нет, возвращает значение 0
    if (m_cards.empty())
        return 0;

    //если первая карта имеет значение 0, то она лежит рубашкой вверх:
    // вернуть значение 0
    if (m_cards[0]->getValue() == 0)
        return 0;

    // находит сумму очков всех карт, каждый туз дает 1 очко
    // определяет, держит ли рука туз
    bool containsAce = false;
    int total = 0;
    for (auto i : m_cards)
    {
        if (i->getValue() == static_cast<unsigned short>(Card::rank::ACE))
            containsAce = true;

        total += i->getValue();
    }

    // если рука держит туз и сумма довольно маленькая, туз дает 11 очков
    if (containsAce && total <= 11)
    {
        // добавляем только 10 очков, поскольку мы уже добавили
        // за каждый туз по одному очку
        total += 10;
    }

    return total;
}