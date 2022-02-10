#include "Animal.hpp"
#include "Brain.hpp"


Animal::Animal()
{
    this->_type = "Default Animal";
    std::cout << this->_type << " constructor called" << std::endl;
}

Animal::Animal(std::string name)
{
    this->_type = name;
    std::cout << "Animal: copy constructor called for " << this->_type << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal: default destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->_type);
}

Animal::Animal(Animal &copy)
{
    *this = copy;
}

Animal & Animal::operator = (Animal & uguale)
{
    this->_type = uguale._type;
    return (*this);
}

void Animal::makeSound() const
{
}


