#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string weapon)
{
    this->_type = weapon;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;
}

const std::string Weapon::getType(void)
{
    const   std::string &ref = this->_type;
    return (ref);
}
