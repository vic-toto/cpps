#include "Animal.hpp"
#include "Brain.hpp"


Cat::Cat()
{
    this->_type = "Default cat";
    this->brain = new Brain();
    std::cout << this->_type << " constructor called" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat: default destructor called" << std::endl;
}

Cat::Cat(Cat &copy)
{
    delete this->brain;
    brain = new Brain(*copy.brain);
    _type = copy.getType();
    *this = copy;
}

Cat & Cat::operator = (Cat & uguale)
{
    if (this != &uguale)
    {
        delete brain; 
        this->_type = uguale._type;
        brain = new Brain(*uguale.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
	std::cout << "MEOW" << std::endl;
}
