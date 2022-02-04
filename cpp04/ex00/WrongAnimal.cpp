#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "Default WrongAnimal";
    std::cout << this->_type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name)
{
    this->_type = name;
    std::cout << "WrongAnimal: " << this->_type << " constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: Default destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal & copy)
{
    *this = copy;
}

std::string WrongAnimal::getType() const
{
    return (this->_type);
}

WrongAnimal & WrongAnimal::operator = (WrongAnimal & uguale)
{
    this->_type = uguale._type;
    return (*this);
}