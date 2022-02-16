#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constuctor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	if (grade > 150)
		throw  GradeTooHighException();
	else if (grade < 1)
		throw GradeTooLowException();
    this->setName(name);
    this->grade = grade;
    std::cout << "Copy constructor called for Bureaucrat " << name << " with grade " << grade << std::endl;
}

std::string const Bureaucrat::getName()
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

void	Bureaucrat::increment(int num)
{
	if (getGrade() + num > 150)
		throw GradeTooHighException();
	else {
		grade += num;
		std::cout << this->name << " lowered grade to " << grade << std::endl;
	}
}

void	Bureaucrat::setName(const std::string name)
{
	this->name = name;
}

void	Bureaucrat::setGrade(int grade)
{
	this->grade = grade;
}

const Bureaucrat& Bureaucrat::operator = (const Bureaucrat & copy)
{
	this->setName(copy.name);
	this->grade = copy.grade; 
	return (*this);
}

void	Bureaucrat::decrement(int num)
{
	if (getGrade() - num < 1)
		throw GradeTooLowException();
	else{
		grade -= num;
		std::cout << this->name << " increased grade to " << grade << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "GRADE IS TOO HIGH";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "GRADE IS TOO LOW";
}

void	Bureaucrat::signForm(Form &form)
{
	if (this->grade > form.getSignGrade())
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because ";
		throw GradeTooHighException();
	}
	else
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
}

std::ostream& operator<<(std::ostream & os, Bureaucrat & i)
{
	return(os << i.getName() + ", grade: " << i.getGrade());
}

void Bureaucrat::execForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " exec the form " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << getName() << " cannot execute form, because " << e.what() << '\n';
	}
	
}
