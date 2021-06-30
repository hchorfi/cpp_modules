#include "Zombie.hpp"

int     main()
{
    Zombie *zomHord = zombieHorde( 13, "Hamza" );
    delete [] zomHord;
    return 0;
}
