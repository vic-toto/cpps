#include "Animal.hpp"

Dog::Dog()
{
    this->_type = "Default Dog";
    std::cout << this->_type << " constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog: default destructor called" << std::endl;
}

Dog::Dog(std::string name)
{
    this->_type = name;
    std::cout << "Animal: copy constructor called for " << this->_type << std::endl;
}

Dog::Dog(Dog &copy)
{
    *this = copy;
}

Dog & Dog::operator = (Dog & uguale)
{
    this->_type = uguale._type;
    return (*this);
}

void Dog::makeSound() const
{
	std::cout << "WOOOOOF" << std::endl;
}
