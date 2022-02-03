#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default Frag constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Default destructor called - Frag warrior has retired" << std::endl;
}

FragTrap::FragTrap(FragTrap &trap)
{
    *this = trap;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap --- Copy constructor called for " << name;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << " ENERGY : " << _energyPoints << " HIT POINTS : " << _hitPoints << " DAMAGE : " << _attackDamage << std::endl;
}

void    FragTrap::attack(std::string target)
{
    takeDamage(5);
    std::cout << "FragTrap " << this->_name << " attacks "  << target << " causing " << this->_attackDamage << " points of damage!";
    std::cout << " ENERGY : " << _energyPoints << " HIT POINTS : " << _hitPoints << " DAMAGE : " << _attackDamage << std::endl;
}

std::string    FragTrap::getName()
{
    return (this->_name);
}

void    FragTrap::highFiveGuys()
{
    std::cout << getName() << " wants a high five man" << std::endl; 
}

FragTrap  & FragTrap::operator = (FragTrap &equals)
{
    this->_name = equals._name;
    this->_hitPoints = equals._hitPoints;
    this->_attackDamage = equals._attackDamage;
    this->_energyPoints = equals._energyPoints;
    return (*this);
}