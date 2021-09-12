#ifndef SPAN_H
#define SPAN_H

#include <iomanip>
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int N;
        std::vector<int> myVect;
        unsigned int Size;
        Span();

    public:
        Span(unsigned int n);
        Span(const Span& copy);
        Span& operator = (const Span& copy);
        ~Span();
        void    addNumber(int number);
        //std::vector<int> getVector();
        int shortestSpan();
        int longestSpan();
};

#endif