#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

Brain::Brain(Brain &copy)
{
    for(int i = 0; i < 100; i++)
		thoughts[i] = copy.thoughts[i];
    *this = copy;
}

Brain& Brain::operator = (const Brain &brain)
{
    if (this == &brain)
        return (*this);
    for (int i = 0; i < 100; i++)
        thoughts[i] = brain.thoughts[i];
    return (*this);
}