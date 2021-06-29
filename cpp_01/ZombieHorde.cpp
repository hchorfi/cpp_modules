#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name )
{
    
    //std::string name1 = name;
    Zombie *zomHord = new Zombie[N];
    for (int i = 0; i < N ; i++)
    {
       zomHord[i].setName(name);
       zomHord[i].announce();
    }
    return zomHord;
}
