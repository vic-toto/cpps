#include "Zombie.hpp"

Zombie::Zombie(void)
{
};

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " dead forever 🧟‍♀️" << std::endl;
};

Zombie::Zombie(std::string name)
{
	this->name = name;
}


void	Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
