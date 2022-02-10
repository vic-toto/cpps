#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"
#include "Brain.hpp"

class      Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(std::string name);
        Animal(Animal &copy);
        virtual ~Animal();
		Animal & operator = (Animal & uguale);
		virtual void makeSound() const;
		std::string getType() const;
};

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(std::string name);
        Cat(Cat &copy);
        ~Cat();
		Cat & operator = (Cat & uguale);
		virtual void makeSound() const;
};

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(std::string name);
        Dog(Dog &copy);
        ~Dog();
		Dog & operator = (Dog & uguale);
		virtual void makeSound() const;
};



#endif