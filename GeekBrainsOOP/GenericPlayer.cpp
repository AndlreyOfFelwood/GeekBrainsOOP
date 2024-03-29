#include "GenericPlayer.h"

using namespace std;

GenericPlayer::GenericPlayer(const string& name) :
    m_name(name)
{}

GenericPlayer::~GenericPlayer()
{}

bool GenericPlayer::isBusted() const
{
    return (getTotal() > 21);
}

void GenericPlayer::bust() const
{
    cout << m_name << " busts.\n";
}


ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer)
{
    os << aGenericPlayer.m_name << ":\t";

    if (!aGenericPlayer.m_cards.empty())
    {
        for (Card* card: aGenericPlayer.m_cards)
        {
            os << *card << "\t";
        }

        if (aGenericPlayer.getTotal() != 0)
        {
            cout << "(" << aGenericPlayer.getTotal() << ")";
        }
    }
    else
    {
        os << "<empty>";
    }

    return os;
}