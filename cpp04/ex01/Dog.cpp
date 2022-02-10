#include "Animal.hpp"
#include "Brain.hpp"


Dog::Dog()
{
    this->_type = "Default Dog";
    this->brain = new Brain();
    std::cout << this->_type << " constructor called" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog: default destructor called" << std::endl;
}

Dog::Dog(Dog &copy)
{
    delete this->brain;
    brain = new Brain(*copy.brain);
    _type = copy.getType();
    *this = copy;
}

Dog & Dog::operator = (Dog & uguale)
{
    if (this != &uguale)
    {
        delete brain; 
        this->_type = uguale._type;
        brain = new Brain(*uguale.brain);
    }
    return (*this);
}

void Dog::makeSound() const
{
	std::cout << "WOOF" << std::endl;
}
