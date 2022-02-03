#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int     main(void)
{
    FragTrap one("Bouncie");
    ScavTrap a("Blondie");

    one.attack("Mattep");
    a.attack("Mike");
    a.guardGate();
    one.highFiveGuys();
    std::cout << "IT IS OVER FOR NOW" << std::endl;
    return (0);
}