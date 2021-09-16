#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "Default Claptrap constractor called\n";
    // this->_HitPoints = 10;
    // this->_EnergyPoints = 10;
    // this->_AttackDamage = 0;
}

// ClapTrap::ClapTrap(std::string name) : _Name(name) ,  _HitPoints(10) ,_EnergyPoints(10) , _AttackDamage(0) {
//     std::cout << "Parametric constructor called from ClapTrap" << std::endl;
// }

ClapTrap::ClapTrap(std::string  name , int  hitPoints , int  energyPoints , int  attackDamage){
    std::cout << "constructor called from ClapTrap" << std::endl;
    this->_Name = name;
    this->_HitPoints = hitPoints;
    this->_EnergyPoints = energyPoints;
    this->_AttackDamage = attackDamage;
}

ClapTrap::ClapTrap(std::string Name) : _Name(Name) ,  _HitPoints(10) ,_EnergyPoints(10) , _AttackDamage(0)
{
    // this->_HitPoints = 10;
    // this->_EnergyPoints = 10;
    // this->_AttackDamage = 0;

    std::cout << "\n\n";
    std::cout << "Claptrap string constractor called\n";
    std::cout << "              ___                                  \n";
    std::cout << "             |_|_|                                 \n";
    std::cout << "             |_|_|              _____              \n";
    std::cout << "             |_|_|     ____    |*_*_*|             \n";
    std::cout << "    _______   _\\__\\___/ __ \\____|_|_   _______     \n";
    std::cout << "   / ____  |=|      \\  <_+>  /      |=|  ____ \\    \n";
    std::cout << "   ~|    |\\|=|======\\______//======|=|/|    |~    \n";
    std::cout << "    |_   |    \\      |      |      /    |    |     \n";
    std::cout << "     \\==-|     \\     |"<< std::setw(6)<<this->_Name <<"|     /     |----|~~/  \n";
    std::cout << "     |   |      |    |      |    |      |____/~/   \n";
    std::cout << "     |   |       \\____\\____/____/      /    / /    \n";
    std::cout << "     |   |         {----------}       /____/ /     \n";
    std::cout << "     |___|        /~~~~~~~~~~~~\\     |_/~|_|/      \n";
    std::cout << "      \\_/        |/~~~~~||~~~~~\\|     /__|\\        \n";
    std::cout << "      | |         |    ||||    |     (/|| \\)       \n";
    std::cout << "      | |        /     |  |     \\       \\\\         \n";
    std::cout << "      |_|        |     |  |     |                  \n";
    std::cout << "                 |_____|  |_____|                  \n";
    std::cout << "                 (_____)  (_____)                  \n";
    std::cout << "                 |     |  |     |                  \n";
    std::cout << "                 |     |  |     |                  \n";
    std::cout << "                 |/~~~\\|  |/~~~\\|                  \n";
    std::cout << "                 /|___|\\  /|___|\\                  \n";
    std::cout << "                <_______><_______>                 \n";
    std::cout << "\n\n";
    std::cout << std::left << std::setw(20) <<"Name : " << this->_Name << "\n";
    std::cout << std::left << std::setw(20) <<"EnergyPoints : " << this->_EnergyPoints << "\n";
    std::cout << std::left << std::setw(20) <<"HitPoints : " << this->_HitPoints << "\n";
    std::cout << std::left << std::setw(20) <<"AttackDamage : " << this->_AttackDamage << "\n";
    std::cout << "\n\n";
}

ClapTrap& ClapTrap::operator = (const ClapTrap& clap)
{
    std::cout << "ClapTrap Assignation operator called\n";
    if (this != &clap)
    {
        this->_Name = clap.getName();
        this->_HitPoints = clap._HitPoints;
        this->_EnergyPoints = clap._EnergyPoints;
        this->_AttackDamage = clap._AttackDamage;
    }
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
    std::cout << "ClapTrap Copy constructor called\n";
    *this = claptrap;
}

std::string    ClapTrap::getName() const
{
    return this->_Name;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Deconstructor called\n";
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << Green << "\n\n";
    //std::cout << "Claptrap attack\n";
    std::cout << "      ----.                                                                 ___                                  \n";
    std::cout << "    \"   _}                                                                |_|_|                                 \n";
    std::cout << "    \"@   >                                                                |_|_|              _____              \n";
    std::cout << "    |\\   7                                                                |_|_|     ____    |*_*_*|             \n";
    std::cout << "    / `-- _  " << target << "  ,-----                           __________ _______   _\\__\\___/ __ \\____|_|_   _______     \n";
    std::cout << " ~    >o<  \\---------o{__             _____________|          / ____  |=|      \\  <_+>  /      |=|  ____ \\    \n";
    std::cout << "/  |  \\  /  ________/8'     ********__ ___ ___ ___ _________  ~|    |\\|=|======\\______//======|=|/|    |~    \n";
    std::cout << "|  |       /           \"                                         | ___|     \\      |      |      /    |    |     \n";
    std::cout << "|  /      |                                                                  \\     |"<< std::setw(6)<<this->_Name <<"|     /     |----|~~/  \n";
    std::cout << "                                                                              |    |      |    |      |____/~/   \n";
    std::cout << "                                                                               \\____\\____/____/      /    / /    \n";
    std::cout << "                                                                                {----------}       /____/ /     \n";
    std::cout << "                                                                               /~~~~~~~~~~~~\\     |_/~|_|/      \n";
    std::cout << "                                                                              |/~~~~~||~~~~~\\|     /__|\\        \n";
    std::cout << "                                                                               |    ||||    |     (/|| \\)       \n";
    std::cout << "                                                                              /     |  |     \\       \\\\         \n";
    std::cout << "                                                                              |     |  |     |                  \n";
    std::cout << "                                                                              |_____|  |_____|                  \n";
    std::cout << "                                                                              (_____)  (_____)                  \n";
    std::cout << "                                                                              |     |  |     |                  \n";
    std::cout << "                                                                              |     |  |     |                  \n";
    std::cout << "                                                                              |/~~~\\|  |/~~~\\|                  \n";
    std::cout << "                                                                              /|___|\\  /|___|\\                  \n";
    std::cout << "                                                                             <_______><_______>                 \n";
    std::cout << Reset <<"\n\n";
    this->_HitPoints--;
    //this->_EnergyPoints--;
    this->_AttackDamage++;
    std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!\n\n";
}

void    ClapTrap::takeDamage(unsigned int amount)
{

    std::cout << Red << "\n\n";
    std::cout << "      ----.                                                     ___                                  \n";
    std::cout << "    \"   _}                                                    |_|_|                                 \n";
    std::cout << "    \"@   >                                                    |_|_|              _____              \n";
    std::cout << "    |\\   7                                                    |_|_|     ____    |*_*_*|             \n";
    std::cout << "    / `-- _  Enemy  ,-------,****  ****   ****    ****_______   _\\__\\___/ __ \\____|_|_   _______     \n";
    std::cout << " ~    >o<  \\---------o{___}-                        / ____  |=|      \\  <_+>  /      |=|  ____ \\    \n";
    std::cout << "/  |  \\  /  ________/8'                             ~|    |\\|=|======\\______//======|=|/|    |~    \n";
    std::cout << "|  |       /           \"                             |_   |    \\      |      |      /    |    |     \n";
    std::cout << "|  /      |                                           \\==-|     \\     |"<< std::setw(6)<<this->_Name <<"|     /     |----|~~/  \n";
    std::cout << "                                                      |   |      |    |      |    |      |____/~/   \n";
    std::cout << "                                                      |   |       \\____\\____/____/      /    / /    \n";
    std::cout << "                                                      |   |         {----------}       /____/ /     \n";
    std::cout << "                                                      |___|        /~~~~~~~~~~~~\\     |_/~|_|/      \n";
    std::cout << "                                                       \\_/        |/~~~~~||~~~~~\\|     /__|\\        \n";
    std::cout << "                                                       | |         |    ||||    |     (/|| \\)       \n";
    std::cout << "                                                       | |        /     |  |     \\       \\\\         \n";
    std::cout << "                                                       |_|        |     |  |     |                  \n";
    std::cout << "                                                                  |_____|  |_____|                  \n";
    std::cout << "                                                                  (_____)  (_____)                  \n";
    std::cout << "                                                                  |     |  |     |                  \n";
    std::cout << "                                                                  |     |  |     |                  \n";
    std::cout << "                                                                  |/~~~\\|  |/~~~\\|                  \n";
    std::cout << "                                                                  /|___|\\  /|___|\\                  \n";
    std::cout << "                                                                 <_______><_______>                 \n";
    std::cout << Reset <<"\n\n";

    this->_EnergyPoints -= amount;
    std::cout << this->_Name << " Take a Damage cost him " << amount << " Energy points\n";
    std::cout << Yellow <<"Warning you have " << this->_EnergyPoints << " Energy Points left\n" << Reset;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->_EnergyPoints += amount;
    std::cout << " ... " << this->_Name << " Repaired with " << amount << "Points of Energy\n";
    std::cout << "You Have now " << this->_EnergyPoints << " Energy Points\n\n";
}

        //                                              ___
        //                                             |_|_|
        //                                             |_|_|              _____
        //                                             |_|_|     ____    |*_*_*|
        //                         __________ _______   _\__\___/ __ \____|_|_   _______
        //           _____________|          / ____  |=|      \  <_+>  /      |=|  ____ \
        // **** **** __ ___ ___ ___ _________~|____|\|=|======\\______//======|=|/|    |~
        //                                    |____|    \      |      |      /    |    |
        //                                               \     |  2D  |     /     |----|~~/
        //                                                |    |      |    |      |____/~/
        //                                                 \____\____/____/      /    / /
        //                                                  {----------}       /____/ /
        //                                                 /~~~~~~~~~~~~\     |_/~|_|/
        //                                                 |/~~~~~||~~~~~\|     /__|\
        //                                                  |    ||||    |     (/|| \)
        //                                                 /     |  |     \       \\
        //                                                 |     |  |     |
        //                                                 |_____|  |_____|
        //                                                 (_____)  (_____)
        //                                                 |     |  |     |
        //                                                 |     |  |     |
        //                                                 |/~~~\|  |/~~~\|
        //                                                 /|___|\  /|___|\
        //                                                <_______><_______>