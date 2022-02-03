#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Default destructor called - warrior has retired" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &trap)
{
    *this = trap;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap --- Copy constructor called for " << name;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << " ENERGY : " << _energyPoints << " HIT POINTS : " << _hitPoints << " DAMAGE : " << _attackDamage << std::endl;
}

void    ScavTrap::attack(std::string target)
{
    takeDamage(5);
    std::cout << "ScavpTrap " << this->_name << " attacks "  << target << " causing " << this->_attackDamage << " points of damage!";
    std::cout << " ENERGY : " << _energyPoints << " HIT POINTS : " << _hitPoints << " DAMAGE : " << _attackDamage << std::endl;
}

std::string    ScavTrap::getName()
{
    return (this->_name);
}

void    ScavTrap::guardGate()
{
    std::cout << getName() << " has entered gateKeeper mode" << std::endl; 
}

ScavTrap  &  ScavTrap::operator = (ScavTrap &equals)
{
    this->_name = equals._name;
    this->_hitPoints = equals._hitPoints;
    this->_attackDamage = equals._attackDamage;
    this->_energyPoints = equals._energyPoints;
    return (*this);
}