#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
       Bureaucrat a("victoria", 1);
		Bureaucrat b("moya", 135);
		Bureaucrat d("anna", 20);
		Bureaucrat e("ceccaroni", 150);
		ShrubberyCreationForm x("home");
		RobotomyRequestForm y("Gigi");
		PresidentialPardonForm z("Alessio");
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << d << std::endl;
		std::cout << e << std::endl;
		std::cout << x << std::endl;
		std::cout << y << std::endl;
		std::cout << z << std::endl;

		e.execForm(x);
		a.execForm(x);
		a.signForm(x);
		a.signForm(y);
		a.signForm(z);
		e.execForm(x);
		b.execForm(x);
		b.execForm(y);
		d.execForm(y);
		d.execForm(z);
		a.execForm(z);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}