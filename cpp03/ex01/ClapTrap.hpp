#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
		unsigned int _attackDamage;
    public:
        ClapTrap();
        ~ClapTrap();
		ClapTrap(std::string name);
        ClapTrap(ClapTrap &trap);
        void displayStatus();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        ClapTrap &operator = (ClapTrap & equal);
};

#endif