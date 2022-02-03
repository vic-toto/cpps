#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
		unsigned int _attackDamage;
    public:
        DiamondTrap();
        ~DiamondTrap();
		DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap &trap);
        std::string getName();
        void    takeDamage(unsigned int amount);
		void attack(std::string target);
		void whoAmI();
        DiamondTrap &operator = (DiamondTrap & equal);
};

#endif