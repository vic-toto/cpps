#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *zombie;

    zombie = new Zombie[N];
    if (zombie)
    {
        for (int i = 0; i < N; i++){
            zombie[i].setName(name);
        }
    }
    return (zombie);
}
