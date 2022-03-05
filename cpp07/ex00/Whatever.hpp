#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <class T>
T max (T a, T b){
    T result;
    result = (a > b) ? a : b;
    return (result);
}

template <class T>
T min (T a, T b) {
    T result;
    result = (a < b) ? a : b;
    return (result);
}

template <class T>
void swap(T& a, T& b) {
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

#endif