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

void    Karen::setKeys(std::string level)
{
    int key = -1;
    for (int i = 0; i < 4; i++)
    {
        if (this->array[i] == level){
            key = i;
            break ;
        }
    }
    switch (key)
    {
        case 0:
                this->keys = DEBUG;
                break ;
        case 1:
                this->keys = INFO;
                break ;
        case 2:
                this->keys = WARNING;
                break ;
        case 3:
                this->keys = ERROR;
                break ;
        default:
                this->keys = ERROR;
                std::cout << "NOTICE: " << level << " invalid. Returning ERROR" << std::endl;
                break ;
    }
}

void    Karen::complain(std::string level)
{
    for (int j = this->keys; j < 4; j++)
    {
        if (!level.compare(array[j])){
            (this->*karenArray[j])();
            break ;
        }
    }
}
