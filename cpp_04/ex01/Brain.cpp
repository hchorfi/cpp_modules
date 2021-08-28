#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called\n";
}

Brain::Brain(const Brain& copy)
{
    std::cout << "Brain Copy constructor called\n";
    *this = copy;
}

Brain& Brain::operator = (const Brain& brain)
{
    std::cout << "Brain Assignement constructor called\n";
    if (this != &brain)
    {
        for(int i = 0 ; i < 100 ; i++)
        {
            this->ideas[i] = brain.ideas[i];
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called\n";
}