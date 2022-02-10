#include "Animal.hpp"
#include "Brain.hpp"

int main()
{   
    Cat	*cat = new Cat();
	Dog *dog = new Dog();

	cat->makeSound();
	dog->makeSound();

	delete cat;
	delete dog;
    return (0);
}