#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <sstream>
#include <string>

class Brain
{
    private:
        std::string thoughts[100];
    public:
        Brain();
        Brain(Brain &copy);
        Brain & operator = (const Brain &brain);
        ~Brain();
};

#endif