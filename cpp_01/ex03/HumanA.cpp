#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weaponHumanA)
{
    this->HumanAname = name;
    this->HumanAweapon = weaponHumanA;
}

void    HumanA::attack(void)
{
    std::cout << this->HumanAname;
    std::cout << " attacks with his ";
    std::cout << this->HumanAweapon.getType();
    std::cout << "\n";
}

HumanA::~HumanA(void)
{

}