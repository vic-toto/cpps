#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
       Bureaucrat a("victoria", 1);
		Bureaucrat b("moya", 135);
		Bureaucrat d("anna", 20);
		Bureaucrat e("ceccaroni", 150);
		Form *one, *two, *three;
		Intern intern;
		one = intern.makeForm("Shrubbery", "victoria");
		two = intern.makeForm("Robotomy", "moya");
		three = intern.makeForm("Presidential", "anna");
		b.execForm(*two);
		e.execForm(*one);
		a.signForm(*one);
		a.signForm(*two);
		d.execForm(*three);
		a.signForm(*three);
		delete one;
		delete two;
		delete three;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}