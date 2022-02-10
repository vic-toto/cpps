#pragma once

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class      Animal
{
    protected:
        std::string _type;
        Animal();
        Animal(std::string name);
        Animal(Animal &copy);
        virtual ~Animal();
    public:
		Animal & operator = (Animal & uguale);
		virtual void makeSound() const = 0;
		std::string getType() const;
};

class Cat : public Animal
{
    private:
        Brain*  brain;
    public:
        Cat();
        Cat(Cat &copy);
        ~Cat();
		Cat & operator = (Cat & uguale);
		virtual void makeSound() const;
};

class Dog : public Animal
{
    private:
        Brain*  brain;
    public:
        Dog();
        Dog(Dog &copy);
        ~Dog();
		Dog & operator = (Dog & uguale);
		virtual void makeSound() const;
};



#endif