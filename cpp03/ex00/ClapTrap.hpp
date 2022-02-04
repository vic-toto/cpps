#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
		unsigned int _attackDamage;
    public:
        ClapTrap();
        ~ClapTrap();
		ClapTrap(std::string name);
        ClapTrap(ClapTrap &trap);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        void    displayStatus();
        ClapTrap &operator = (ClapTrap & equal);
};

#endif