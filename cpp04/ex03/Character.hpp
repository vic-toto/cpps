#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;
class   Character : public ICharacter
{
    private:
        std::string _name;
        AMateria *inventory[4];
    public: 
        Character(const std::string &name);
		Character(Character& copy);
		Character& operator= (Character& copy);
		~Character();
		std::string const &getName() const;
		void equip(AMateria* materia);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif