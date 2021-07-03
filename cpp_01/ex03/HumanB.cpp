#include "HumanB.hpp"

HumanB::HumanB(std::string name): _HumanBname(name)
{

}

HumanB::~HumanB(void)
{

}
void    HumanB::attack(void)
{
    std::cout << this->_HumanBname;
    std::cout << " attacks with his ";
    std::cout << this->_HumanBweapon->getType();
    std::cout << "\n";
}

void    HumanB::setWeapon(Weapon &HumanBweapon)
{
    this->_HumanBweapon = &HumanBweapon;
}
