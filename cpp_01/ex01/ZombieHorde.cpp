#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
    Zombie *zomHord = new Zombie[N];
    for (int i = 0; i < N ; i++)
    {
        zomHord[i].setName(name);
    }
    return zomHord;
}
