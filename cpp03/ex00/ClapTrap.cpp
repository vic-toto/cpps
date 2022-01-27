#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Default destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Copy constructor called for " << name << std::endl;
    this->_name = name;
}

void    ClapTrap::attack(std::string const & target)
{

}