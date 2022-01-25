#include "HumanA.hpp"

HumanA::~HumanA()
{
}

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
    this->weapon = weapon;
    this->_name = name;
}

void    HumanA::attack()
{
    std::cout << this->_name << " : << Kamehameha with my big " << this->weapon.getType() << " bitch >>" << std::endl;
}