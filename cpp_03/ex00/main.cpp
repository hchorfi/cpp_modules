#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapdef;
    ClapTrap clap("Hamza");
    ClapTrap clap2("Hamza2");
    clapdef = clap2;
    clap.takeDamage(2);
    clap.attack("Devza");
    clap.beRepaired(5);
    return 0;
}