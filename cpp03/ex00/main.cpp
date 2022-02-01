#include "ClapTrap.hpp"

int     main(void)
{
    ClapTrap one("Bouncie");
    ClapTrap two("Wrigley");

    one.attack("Wrigley");
    two.takeDamage(0);
    two.attack("Bouncie");
    one.takeDamage(0);
    one.beRepaired(3);
    two.beRepaired(3);
    std::cout << "The battle is over... for now" << std::endl;
    return (0);
}