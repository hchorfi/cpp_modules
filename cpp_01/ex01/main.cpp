#include "Zombie.hpp"

int     main()
{
    int zomNum = 13;
    Zombie *zomHord = zombieHorde( zomNum, "Hamza" );
    for (int i = 0; i < zomNum ; i++)
        zomHord[i].announce();
    delete [] zomHord;
    return 0;
}
