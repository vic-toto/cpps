#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    ClapTrap one("Bouncie");
    ScavTrap a("Blondie");

    a.takeDamage(5);
    one.attack("Blondie");
    one.takeDamage(5);
    a.attack("Bouncie");
    a.guardGate();
    std::cout << "The battle is over... for now" << std::endl;
    return (0);
}