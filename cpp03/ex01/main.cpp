#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    ClapTrap one("Bouncie");
    ScavTrap a("Blondie");

    one.attack("Blondie");
    a.attack("Bouncie");
    a.guardGate();
    std::cout << "The battle is over... for now" << std::endl;
    return (0);
}