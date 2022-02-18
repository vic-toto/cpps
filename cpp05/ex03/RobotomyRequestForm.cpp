#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy) : Form(copy)
{
    *this = copy;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (RobotomyRequestForm &copy)
{
    this->target = copy.target;
    return (*this);
}

void    RobotomyRequestForm::execute() const
{
    srand(time(NULL));
    int random = rand()%2;
    if (random)
        std::cout << this->target << " *drilling noises*" << std::endl;
    else
        std::cout << this->target << " has been successfully robotomised bruh" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
