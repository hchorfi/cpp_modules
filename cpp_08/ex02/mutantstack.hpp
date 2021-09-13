#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iomanip>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <stack>

template <typename T>
class Mutantstack : public std::stack <T>
{
    private:
        
    public:
        Mutantstack(){};
        ~Mutantstack(){};
};

#endif