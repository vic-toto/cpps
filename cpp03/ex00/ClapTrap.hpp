#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int hitPoints = 10;
        unsigned int energyPoints = 10;
		unsigned int attackDamage = 0;
    public:
        ClapTrap();
        ~ClapTrap();
		ClapTrap(std::string name);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif