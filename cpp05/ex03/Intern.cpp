#include "Intern.hpp"


Intern::Intern()
{
	this->type[0] = "Shrubbery";
	this->type[1] = "Robotomy";
	this->type[2] = "Presidential";
}

Intern::~Intern()
{
}

void    Intern::getCase(std::string caso)
{
    int i = -1;
	while (++i <= 4)
		if (!caso.compare(this->type[i]))
			break ;
	switch (i)
	{
	case 0:
			this->formType = Shrubbery;
			break ;
	case 1:
			this->formType = Robotomy;
			break ;
	case 2:
			this->formType = Presidential;
			break ;
	default:
			this->formType = DEFAULT;
			break ;
	}
}

Form * Intern::makeForm(std::string form, std::string target)
{
	getCase(form);
	switch (formType)
	{
		case Shrubbery:
				std::cout << "Intern created a Shubbery" << std::endl;
				return (new ShrubberyCreationForm(target));
		case Robotomy:
				std::cout << "Intern created a Robotomy" << std::endl;
				return (new RobotomyRequestForm(target));
		case Presidential:
				std::cout << "Intern created a Presidential form" << std::endl;
				return (new PresidentialPardonForm(target));
		case DEFAULT:
				throw formNotFoundException();

	}
}

const char* Intern::formNotFoundException::what() const throw()
{
	return "Form not found\n";
}
