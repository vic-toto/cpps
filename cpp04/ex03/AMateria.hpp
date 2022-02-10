#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <sstream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(std::string const & type);
        AMateria(AMateria & copy);
        virtual ~AMateria();
        AMateria & operator = (const AMateria & copy);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *arr[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource& copy);
		MateriaSource& operator= (MateriaSource& uguale);
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& copy);
		Cure& operator= (const Cure * uguale);
		Cure* clone() const;
		~Cure();
		void use(ICharacter& target);
};

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice & copy);
		Ice& operator= (const Ice& uguale);
		Ice* clone() const;
		~Ice();
		void use(ICharacter& target);
};


#endif