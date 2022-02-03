#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int     main(void)
{
    DiamondTrap     a("Victoria");

    a.attack("Matteo");
    a.guardGate();
    a.highFiveGuys();
    a.whoAmI();
    return (0);
}