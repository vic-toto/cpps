#include "Character.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& copy) : AMateria(copy.getType())
{	
}

Ice& Ice::operator= (const Ice& uguale)
{
	this->_type = uguale.getType();
	return *this;
}

Ice* Ice::clone() const
{
	Ice *ice = new Ice(*this);
	return ice;
}

Ice::~Ice()
{
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice to " + target.getName() << std::endl;
}

