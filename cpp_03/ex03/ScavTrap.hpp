#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"

class   ScavTrap : public virtual ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap& scavtrap);
        ScavTrap& operator = (const ScavTrap& scavtrap); 
        ~ScavTrap();

        //void    attack(std::string const & target);
        void    guardGate();
};

#endif