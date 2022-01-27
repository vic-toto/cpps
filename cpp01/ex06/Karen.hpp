#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

enum    Keys
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
};

class Karen;
typedef void    (Karen::*Jump)(void);

class Karen
{
    private:
        Jump    karenArray[4];
        std::string array[4];
        void    debug();
        void    info();
        void    warning();
        void    error();
        Keys    keys;

    public:
        Karen();
        ~Karen();
        void    setKeys(std::string level);
        void    complain(std::string level);
};

#endif