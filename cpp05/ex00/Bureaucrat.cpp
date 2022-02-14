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
	if (grade > 150)
		throw  GradeTooHighException();
	else if (grade < 1)
		throw GradeTooLowException();
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

void	Bureaucrat::increment(int num)
{
	if (getGrade() + num > 150)
		throw GradeTooHighExeption();
	else {
		grade += num;
		std::cout << this->name << " lowered grade to " << this->getGrade() << std::endl;
	}
}

void	Bureaucrat::decrement(int num)
{
	if (getGrade() - num < 1)
		throw GradeTooLowExeption;
	else{
		grade -= num;
		std::cout << this->name << |" increased grade to " << this->getGrade() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "GRADE IS TOO HIGH";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "GRADE IS TOO LOW";
}

std::ostream& operator<<(std::ostream & os, Bureaucrat & i)
{
	return(os << i.getName() + ", grade: " << i.getGrade());
}