#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
		FragTrap(std::string name);
        FragTrap(FragTrap &trap);
		void attack(std::string target);
		void highFiveGuys();
        std::string getName();
        FragTrap &operator = (FragTrap & equal);
};

#endif