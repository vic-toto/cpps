#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
		ScavTrap(std::string name);
        ScavTrap(ScavTrap &trap);
		void attack(std::string target);
		void guardGate();
        std::string getName();
        //void  takeDamage(unsigned int amount);
        ScavTrap &operator = (ScavTrap & equal);
};

#endif