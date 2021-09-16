#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    // ClapTrap clapdef;
    ClapTrap clap("Hamza");
    // ClapTrap clap2("Hamza2");
    // clapdef = clap2;
    // clap.takeDamage(2);
    // clap.attack("Devza");
    // clap.beRepaired(5);
    // std::cout << "-----------\n";
    // ScavTrap scavdef;
    // ScavTrap scav("Hamza");
    ScavTrap scav2("Hamza2");
    // scavdef = scav2;
    // scav.takeDamage(3);
    // scav.attack("Devza");
    // scav.beRepaired(7);
    // scav.guardGate();
    FragTrap frag("frrrag");
    // frag.highFivesGuys();
    // frag.attack("Devza");
    // frag.takeDamage(4);
    DiamondTrap hamza("test");
    hamza.attack("test2");
    hamza.whoAmI();
    return 0;
}