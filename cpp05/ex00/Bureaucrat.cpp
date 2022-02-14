#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constuctor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default destructor" << std::line;
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
    this->name = name;
    this->grade = grade;
    std::cout << "Copy constructor called for Bureaucrat " << name << " with grade " << grade << std::endl;
}

std::string const Bureaucrat::getName()
{
    return (this->name);
}

int Bureaucrat::getGrade()
{
    return (this->grade);
}

