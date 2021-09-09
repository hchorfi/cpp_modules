#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <iomanip>

template <typename T>
void increment(T *arr, int i)
{
    std::cout << "'" << arr[i] << "'\n";
}

template <typename T>
void iter(T *arr, int len, void (*f)(T *arr, int i))
{
    for (int i = 0; i < len; i++)
    {
        (*f)(arr, i);
    }
}

#endif