#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int     main(void)
{
    FragTrap one("Bouncie");
    ScavTrap a("Blondie");

    one.displayStatus();
    a.displayStatus();
    one.attack("Blondie");
    a.takeDamage(20);
    a.attack("Bouncie");
    one.takeDamage(20);
    a.guardGate();
    one.highFiveGuys();
    one.displayStatus();
    a.displayStatus();
    std::cout << "IT IS OVER FOR NOW" << std::endl;
    return (0);
}