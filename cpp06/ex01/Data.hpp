#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
    public:
        Data();
        ~Data();
        int i;
        bool b;
        std::string str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif