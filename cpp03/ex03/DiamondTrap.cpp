#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "Default Frag constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Default destructor called - DiamondTrap warrior has retired" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &trap)
{
    *this = trap;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    std::cout << "FragTrap --- Copy constructor called for " << name;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << " ENERGY : " << _energyPoints << " HIT POINTS : " << _hitPoints << " DAMAGE : " << _attackDamage << std::endl;
}

void   DiamondTrap::takeDamage(unsigned int amount)
{
    this->_attackDamage += amount;
    this->_energyPoints -= amount;
}

void    DiamondTrap::attack(std::string target)
{
    takeDamage(5);
    std::cout << "DiamondTrap " << this->_name << " attacks "  << target << " causing " << this->_attackDamage << " points of damage!";
    std::cout << " ENERGY : " << _energyPoints << " HIT POINTS : " << _hitPoints << " DAMAGE : " << _attackDamage << std::endl;
}

std::string    DiamondTrap::getName()
{
    return (this->_name);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "Helloooo my name is " << this->_name << " or is it " << getName() << " cannot remember" << std::endl; 
}

DiamondTrap  & DiamondTrap::operator = (DiamondTrap &equals)
{
    this->_name = equals._name;
    this->_hitPoints = equals._hitPoints;
    this->_attackDamage = equals._attackDamage;
    this->_energyPoints = equals._energyPoints;
    return (*this);
}