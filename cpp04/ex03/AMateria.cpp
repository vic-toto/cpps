#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(AMateria & copy)
{
    *this = copy;
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

AMateria::~AMateria()
{
}

AMateria & AMateria::operator = (const AMateria & copy)
{
    this->_type = copy._type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return _type;
}

void    AMateria::use(ICharacter & target)
{
    (void)target;
}

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
		arr[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &copy)
{
	*this = copy;
}

MateriaSource& MateriaSource::operator= (MateriaSource& uguale)
{
	for(int i = 0; i < 4; i++)
		arr[i] = uguale.arr[i]->clone();
	return(*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for(int i = 0; i < 4; i++)
	{
		if(!arr[i])
		{
			arr[i] = materia->clone();
			std::cout << "Materia " + materia->getType() + " appresa all'indice " << i << std::endl;
			if (materia)
				delete materia;
			return;
		}
	}
	if (materia)
		delete materia;
	std::cout << "Slot pieni" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if(arr[i] != NULL)
			if(arr[i]->getType() == type)
				return (arr[i]->clone());
	}
	std::cout << "Materia Non trovata\n";
	return NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if(arr[i])
			delete arr[i];
	}
}