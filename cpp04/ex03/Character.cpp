#include "Character.hpp"
#include "AMateria.hpp"

// ICharacter::~ICharacter()
// {
// }

// std::string const & ICharacter::getName() const
// {
	// return (this->_name);
// }

Character::Character(const std::string &name)
{
	this->_name = name;
	for(int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(Character& copy)
{
	*this = copy;
	this->_name = copy.getName();
}

Character& Character::operator= (Character& copy)
{
	for(int i = 0; i < 4; i++)
	{
		if(copy.inventory[i])
		{
			inventory[i] = copy.inventory[i]->clone();
		}
	}
	return(*this);
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete inventory[i];
}

std::string const & Character::getName() const
{
	return(_name);
}

void Character::equip(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if(inventory[i] == NULL)
		{
			inventory[i] = materia->clone();
			std::cout << "Materia " + materia->getType() + " has been added to index position " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory complete" << std::endl;
}

void Character::unequip(int idx)
{
	if (inventory[idx] != NULL)
	{
		delete inventory[idx];
		inventory[idx] = NULL;
		std::cout << "Inventory freed" << std::endl;
		return;
	}
	else
	{
		std::cout << "Index has already been freed or does not exist" << std::endl;
		return;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if(inventory[idx])
	{
		inventory[idx]->use(target);
	}
	else
		std::cout << "Impossible to use: empty slot" << std::endl;
}