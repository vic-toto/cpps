#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    ClapTrap one("Bouncie");
    ScavTrap a("Blondie");

    one.displayStatus();
    a.displayStatus();
    one.attack("Blondie");
    a.takeDamage(5);
    a.attack("Bouncie");
    one.takeDamage(10);
    one.displayStatus();
    a.displayStatus();
    a.guardGate();
    std::cout << "The battle is over... for now" << std::endl;
    return (0);
}