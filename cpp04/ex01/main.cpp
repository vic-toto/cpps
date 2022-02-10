#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

const WrongAnimal* x = new WrongAnimal();
const WrongCat *y = new WrongCat();
x->makeSound();
y->makeSound();
delete meta;
delete j;
delete i;
delete x;
delete y;

return (0);
}