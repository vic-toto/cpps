#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:
        HumanB();
        ~HumanB();
        HumanB(std::string name);
        void    setWeapon(Weapon &weapon);
        void    attack();

    private:
        std::string _name;
        Weapon *weapon;
};









#endif