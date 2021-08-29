#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"

class   FragTrap : public virtual ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string Name);
        FragTrap(const FragTrap& fragtrap);
        FragTrap& operator = (const FragTrap& fragtrap); 
        ~FragTrap();

        void    attack(std::string const & target);
        void    highFivesGuys(void);
};

#endif