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
        void setIdea(int i, std::string idea);
        std::string getIdea(int i);

    protected:
        std::string ideas[100];
};

#endif