#ifndef EASYFIND_H
#define EASYFIND_H

#include <algorithm>
#include <iostream>
#include <iomanip>

template <typename T>
void    easyfind(T container, int n)
{
    typename T::iterator ptr;
    if ((ptr = std::find(container.begin(), container.end(), n)) != container.end())
        std::cout << "Element found in countainer : " << *ptr << "\n";
    else
        throw std::string("Element not found in countainer\n");
}

#endif
