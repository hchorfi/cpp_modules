#include "Karen.hpp"

Karen::Karen(void)
{

}

Karen::~Karen(void)
{

}

void    Karen::_debug(void)
{
    std::cout << Blue <<"I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << Reset;
}

void    Karen::_info(void)
{
    std::cout << Green << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << Reset;
}

void    Karen::_warning(void)
{
    std::cout << Yellow << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << Reset;
}

void    Karen::_error(void)
{
    std::cout << Red << "This is unacceptable, I want to speak to the manager now.\n" << Reset;
}

void Karen::complain( std::string level )
{
    std::string theLevel[4] = {
        "DEBUG", 
        "INFO", 
        "WARNING", 
        "ERROR"
    };

    void (Karen::*fun[4])(void) = {
        &Karen::_debug,
        &Karen::_info,
        &Karen::_warning,
        &Karen::_error
    };

    for (int i = 0; i < 4 ; i++)
    {
        if (level == theLevel[i])
            (this->*fun[i])();
    }
}
