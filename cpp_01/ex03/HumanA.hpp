#ifndef HUMAN_A_H
# define HUMAN_A_H

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanA
{
    public:

        HumanA(std::string name, Weapon weaponHumanA);
        ~HumanA(void);
        void    attack(void);

    private:
        std::string HumanAname;
        Weapon HumanAweapon;
};

#endif