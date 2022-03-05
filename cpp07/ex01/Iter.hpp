#ifndef ITER_HPP
#define ITER_HPP 
#include <iostream>
#include <string>

template <typename T>
void    iter(T* array, unsigned int len, void(*f)(const T&))
{
    for (unsigned int i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>
void    print(T const &something){
    std::cout << something << std::endl;
}

#endif