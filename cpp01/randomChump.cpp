#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie *zombie;

    zombie = new Zombie(name);
    zombie->announce();

    delete (zombie);
}