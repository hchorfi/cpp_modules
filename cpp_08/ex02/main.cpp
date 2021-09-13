#include "mutantstack.hpp"

int main()
{
    Mutantstack<int> c1;
    c1.push(5);
    std::cout << c1.size() << '\n';
}