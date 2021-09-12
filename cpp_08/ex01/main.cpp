#include "span.hpp"

int main()
{
    std::srand(time(NULL));
    Span sp = Span(1000);
    for (int i = 0; i < 1000 ;i++)
        sp.addNumber(std::rand() % 1000000);
    //sp.addNumber(321);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}