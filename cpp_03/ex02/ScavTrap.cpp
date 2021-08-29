#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default ScavTrap constractor called\n";
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string Name)
{
    this->_Name = Name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;

    std::cout << "\n\n";
    std::cout << "Scavtrap string constractor called\n";
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

ScavTrap& ScavTrap::operator = (const ScavTrap& scav)
{
    std::cout << "ScavTrap Assignation operator called\n";
    if (this != &scav)
    {
        this->_Name = scav.getName();
        this->_HitPoints = scav._HitPoints;
        this->_EnergyPoints = scav._EnergyPoints;
        this->_AttackDamage = scav._AttackDamage;
    }
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap)
{
    std::cout << "ScavTrap Copy constructor called\n";
    *this = scavtrap;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Deconstructor called\n";
}

// void    ScavTrap::attack(std::string const & target)
// {
//     std::cout << Green << "\n\n";
//     std::cout << "ScavTrap attack\n";
//     std::cout << "      ----.                                                                 ___                                  \n";
//     std::cout << "    \"   _}                                                                |_|_|                                 \n";
//     std::cout << "    \"@   >                                                                |_|_|              _____              \n";
//     std::cout << "    |\\   7                                                                |_|_|     ____    |*_*_*|             \n";
//     std::cout << "    / `-- _  " << target << "  ,-----                           __________ _______   _\\__\\___/ __ \\____|_|_   _______     \n";
//     std::cout << " ~    >o<  \\---------o{__             _____________|          / ____  |=|      \\  <_+>  /      |=|  ____ \\    \n";
//     std::cout << "/  |  \\  /  ________/8'     ********__ ___ ___ ___ _________  ~|    |\\|=|======\\______//======|=|/|    |~    \n";
//     std::cout << "|  |       /           \"                                         | ___|     \\      |      |      /    |    |     \n";
//     std::cout << "|  /      |                                                                  \\     |"<< std::setw(6)<<this->_Name <<"|     /     |----|~~/  \n";
//     std::cout << "                                                                              |    |      |    |      |____/~/   \n";
//     std::cout << "                                                                               \\____\\____/____/      /    / /    \n";
//     std::cout << "                                                                                {----------}       /____/ /     \n";
//     std::cout << "                                                                               /~~~~~~~~~~~~\\     |_/~|_|/      \n";
//     std::cout << "                                                                              |/~~~~~||~~~~~\\|     /__|\\        \n";
//     std::cout << "                                                                               |    ||||    |     (/|| \\)       \n";
//     std::cout << "                                                                              /     |  |     \\       \\\\         \n";
//     std::cout << "                                                                              |     |  |     |                  \n";
//     std::cout << "                                                                              |_____|  |_____|                  \n";
//     std::cout << "                                                                              (_____)  (_____)                  \n";
//     std::cout << "                                                                              |     |  |     |                  \n";
//     std::cout << "                                                                              |     |  |     |                  \n";
//     std::cout << "                                                                              |/~~~\\|  |/~~~\\|                  \n";
//     std::cout << "                                                                              /|___|\\  /|___|\\                  \n";
//     std::cout << "                                                                             <_______><_______>                 \n";
//     std::cout << Reset <<"\n\n";
//     this->_HitPoints--;
//     //this->_EnergyPoints--;
//     this->_AttackDamage++;
//     std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!\n\n";
// }

void    ScavTrap::guardGate()
{
    std::cout << "\n\nScavTrap gardien mode activated\n";
}
