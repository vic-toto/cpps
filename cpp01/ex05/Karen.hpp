#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

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

    public:
        Karen();
        ~Karen();
        void    complain(std::string level);
};

#endif