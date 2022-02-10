#include "AMateria.hpp"
#include "Character.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& copy) : AMateria(copy.getType())
{	
}

Cure& Cure::operator= (const Cure* uguale)
{
	this->_type = uguale->getType();
	return *this;
}

Cure* Cure::clone() const
{
	Cure *cure = new Cure(*this);
	return cure;
}

Cure::~Cure()
{
}

void Cure::use(ICharacter& target)
{
	std::cout << "Curing " + target.getName() << std::endl;
}