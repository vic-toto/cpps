#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string str)
{
	_name = str;
}

Zombie::Zombie(void)
{
};

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " dead forever 🧟‍♀️" << std::endl;
};

void	Zombie::setName(std::string name)
{
	_name = name;
}