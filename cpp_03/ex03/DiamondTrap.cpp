#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Diamond default constructor\n";
    this->_HitPoints = FragTrap::_HitPoints;
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : _Name(name)
{
    ClapTrap::_Name = name + "_clap_name";
    this->_HitPoints = FragTrap::_HitPoints;
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_AttackDamage = FragTrap::_AttackDamage;
    std::cout << std::left << std::setw(20) <<"Name : " << this->_Name << "\n";
    std::cout << std::left << std::setw(20) <<"EnergyPoints : " << this->_EnergyPoints << "\n";
    std::cout << std::left << std::setw(20) <<"HitPoints : " << this->_HitPoints << "\n";
    std::cout << std::left << std::setw(20) <<"AttackDamage : " << this->_AttackDamage << "\n";
    std::cout << "\n\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
    std::cout << "DiamondTrap copy constructor\n";
    *this = copy;
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap& other)
{
    std::cout << "DiamondTrap asigne constructor\n";
    if (this != &other)
    {
        this->_Name = other._Name;
        this->_HitPoints = other._HitPoints;
        this->_EnergyPoints = other._EnergyPoints;
        this->_AttackDamage = other._AttackDamage;
    }
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap deconstructor\n";
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name : " << this->_Name << "\n";
    std::cout << "ClapTrap name : " << ClapTrap::_Name << "\n";
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}