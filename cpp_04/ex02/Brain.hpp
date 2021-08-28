#ifndef BRAIN_H
#define BRAIN_H

#include "iomanip"
#include "iostream"

class   Brain
{
    public:
        Brain();
        Brain(const Brain& copy);
        Brain& operator = (const Brain& animal);
        ~Brain();
    
    protected:
        std::string ideas[100];
};

#endif