#include "ClapTrap.hpp"

int     main(void)
{
    ClapTrap one("Bouncie");
    ClapTrap two("Wrigley");

    one.displayStatus();
    two.displayStatus();
    one.attack("Wrigley");
    two.takeDamage(5);
    two.attack("Bouncie");
    one.takeDamage(5);
    one.beRepaired(3);
    two.beRepaired(3);
    one.displayStatus();
    two.displayStatus();
    std::cout << "The battle is over... for now" << std::endl;
    return (0);
}