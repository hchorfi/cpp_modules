#include "span.hpp"

Span::Span(unsigned int n) : N(n){
    Size = myVect.size();
}

void    Span::addNumber(int number){
    try{
        if (myVect.size() < N)
            myVect.push_back(number);
        else
            throw std::string ("you reach the size limite\n");
    } catch (std::string &e){
        std::cout << e;
    }
}

Span::Span(const Span& copy)
{
    *this = copy;
}

// std::vector<int> Span::getVector()
// {
//     return this->myVect;
// }

Span& Span::operator = (const Span& copy)
{
    N = copy.N;

    for (std::size_t i = 0; i < copy.myVect.size(); i++)
    {
        myVect.push_back(copy.myVect[i]);
    }
    return *this;
}

int Span::shortestSpan()
{
    std::sort(myVect.begin(), myVect.end());
    return myVect[1] - myVect[0];
}

int Span::longestSpan()
{
    std::sort(myVect.begin(), myVect.end());
    return myVect[myVect.size() - 1] - myVect[0];
}

Span::~Span(){}