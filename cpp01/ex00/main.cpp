#include "Zombie.hpp"

int	main(void)
{
	Zombie *a = NULL;
	a = newZombie("paolo"); 

	randomChump("Buggalo");
	delete(a);
	return (0);
}