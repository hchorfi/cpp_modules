#include "Zombie.hpp"

int main()
{
    Zombie Zom1("Instence Zombie");
    Zombie *Zom2 = newZombie("Heap Zombie");
    randomChump("stack Zombie");
    delete Zom2;
    return 0;
}
