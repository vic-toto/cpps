#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    private:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string name);
        WrongAnimal(WrongAnimal & copy);
        ~WrongAnimal();
        WrongAnimal & operator = (WrongAnimal & uguale);
        virtual void makeSound() const;
        std::string getType() const;
};



#endif
