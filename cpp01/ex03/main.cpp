#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon w = Weapon("panino al formaggio");
        HumanA bob("Roberto", w);
        bob.attack();
        w.setType("Doppio hamburger con cozze");
        bob.attack();
    }
    {
        Weapon w2 = Weapon("coglioni di mulo");
        HumanB jim("Matteo");
        jim.setWeapon(w2);
        jim.attack();
        w2.setType("bagna cauda del Piemonte we");
        jim.attack();
    }
}