#include "Animal.hpp"
#include "Brain.hpp"

int main()
{   
    Cat* cat = new Cat();
	Cat* copy_cat = new Cat(*cat);

	delete cat;

	std::cout << std::endl;
	std::cout << copy_cat->getType() << std::endl;
	copy_cat->makeSound();
	std::cout << std::endl;

	delete copy_cat;

	Animal* animals[10];

	for (int i = 0; i < 10; i++) {
		if (i < 5)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << i << ": " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	std::cout << std::endl;

	for (int i = 0; i < 10; i++) {
		delete animals[i];
    }
    return (0);
}