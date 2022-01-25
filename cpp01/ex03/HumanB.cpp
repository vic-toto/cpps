#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string name)
{
    this->_name = name;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    std::cout << this->_name << " : << I'mma Baichiretsuzan ur ass with my " << this->weapon->getType() << " >>" << std::endl;
}