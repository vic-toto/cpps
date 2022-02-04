#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap --- Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap --- Default destructor called - warrior has retired" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &trap)
{
    *this = trap;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap --- Copy constructor called for " << name << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 5;
}

void    ClapTrap::displayStatus()
{
    std::cout << _name << " ENERGY : " << _energyPoints << " HIT POINTS : " << _hitPoints << " DAMAGE : " << _attackDamage << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->_attackDamage += amount;
    this->_energyPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->_energyPoints += amount;
    this->_attackDamage -= amount;
    std::cout << "!!! " << amount << " energyPoints restored" << std::endl;
}

void    ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->_name << " attacks "  << target << " causing " << _attackDamage << " points of damage!" << std::endl;
}

ClapTrap  &  ClapTrap::operator = (ClapTrap &equals)
{
    this->_name = equals._name;
    this->_hitPoints = equals._hitPoints;
    this->_attackDamage = equals._attackDamage;
    this->_energyPoints = equals._energyPoints;
    return (*this);
}