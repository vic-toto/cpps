#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string name);
        WrongAnimal(WrongAnimal & copy);
        virtual ~WrongAnimal();
        WrongAnimal & operator = (WrongAnimal & uguale);
        virtual void makeSound() const;
        std::string getType() const;
};

class   WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string name);
        WrongCat(WrongCat &copy);
        ~WrongCat();
        WrongCat & operator = (WrongCat & uguale);
		std::string	getType() const;
};

#endif
