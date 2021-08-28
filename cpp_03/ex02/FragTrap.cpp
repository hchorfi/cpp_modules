#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default FragTrap constractor called\n";
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
}

FragTrap::FragTrap(std::string Name)
{
    this->_Name = Name;
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;

    std::cout << "\n\n";
    std::cout << "fragtrap string constractor called\n";
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

FragTrap& FragTrap::operator = (const FragTrap& frag)
{
    std::cout << "FragTrap Assignation operator called\n";
    if (this != &frag)
    {
        this->_Name = frag.getName();
        this->_HitPoints = frag._HitPoints;
        this->_EnergyPoints = frag._EnergyPoints;
        this->_AttackDamage = frag._AttackDamage;
    }
    return *this;
}

FragTrap::FragTrap(const FragTrap& fragtrap)
{
    std::cout << "FragTrap Copy constructor called\n";
    *this = fragtrap;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Deconstructor called\n";
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap HiFive \n";
    std::cout << "     _     _       _      __ _       \n";    
    std::cout << "| |   (_)     | |    / _(_)          \n";
    std::cout << "| |__  _  __ _| |__ | |_ ___   _____ \n";
    std::cout << "| '_ \\| |/ _` | '_ \\|  _| \\ \\ / / _ \\\n";
    std::cout << "| | | | | (_| | | | | | | |\\ V /  __/\n";
    std::cout << "|_| |_|_|\\__, |_| |_|_| |_| \\_/ \\___|\n";
    std::cout << "          __/ |                      \n";
    std::cout << "         |___/  \n";
}
