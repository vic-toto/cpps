#include "Animal.hpp"

Cat::Cat()
{
    this->_type = "Default cat";
    std::cout << this->_type << " constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat: default destructor called" << std::endl;
}

Cat::Cat(std::string name)
{
    this->_type = name;
    std::cout << "Animal: copy constructor called for " << this->_type << std::endl;
}

Cat::Cat(Cat &copy)
{
    *this = copy;
}

Cat & Cat::operator = (Cat & uguale)
{
    this->_type = uguale._type;
    return (*this);
}

void Cat::makeSound() const
{
	std::cout << "MEOW" << std::endl;
}
