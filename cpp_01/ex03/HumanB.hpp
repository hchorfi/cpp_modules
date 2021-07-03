#ifndef HUMAN_B_H
# define HUMAN_B_H

#include <iostream>
#include <iomanip>
#include "Weapon.hpp"

class HumanB
{

    private:
        std::string _HumanBname;
        Weapon *_HumanBweapon;

    public:

        HumanB(std::string name);
        ~HumanB(void);
        void    attack(void);
        void    setWeapon(Weapon &HumanBweapon);

};

#endif