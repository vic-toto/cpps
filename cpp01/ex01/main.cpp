#include "Zombie.hpp"

int     main()
{
    Zombie  *zombie;
    int     x;

    std::cout << "Insert number of zombies you would like to generate "  << std::endl;
    std::cin >> x;

    zombie = zombieHorde(x, "Casper");
    if (zombie)
    {
        for (int i = 0; i < x; i++){
            std::cout << "zombie  " << i << " ";
           zombie[i].announce();
        }
    }
    delete[] zombie;
    return (0);
}