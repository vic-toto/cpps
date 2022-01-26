#include "Karen.hpp"

Karen::Karen()
{
    this->karenArray[0] = &Karen::debug;
    this->karenArray[1] = &Karen::info;
    this->karenArray[2] = &Karen::warning;
    this->karenArray[3] = &Karen::error;
    this->array[0] = "DEBUG";
    this->array[1] = "INFO";
    this->array[2] = "WARNING";
    this->array[3] = "ERROR";
}

Karen::~Karen()
{
}

void    Karen::info()
{
    std::cout << "LEVEL INFO: My steak is uncooked and cold, please cook it more" << std::endl;
}

void    Karen::debug()
{
    std::cout << "LEVEL DEBUG: My stake is overcooked and burnt on the sides, I want a new complimentary one and free dessert" << std::endl;
}

void    Karen::warning()
{
    std::cout << "LEVEL WARNING: If you don't hurry up I'm going to leave a bad review of the place" << std::endl;
}

void    Karen::error()
{
    std::cout << "LEVEL ERROR: I wAnT tO sPeAk tO tHe MaNaGeR *flicks blonde pixie cut fringe*" << std::endl;
}

void    Karen::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        if (!level.compare(array[i])){
            (this->*karenArray[i])();
            break ;
        }
    }
}
