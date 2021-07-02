#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponHumanA) : HumanAweapon(weaponHumanA)
{
    this->HumanAname = name;
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