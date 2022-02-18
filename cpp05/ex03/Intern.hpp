#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include <sstream>
#include <exception>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

enum formType
{
    Shrubbery,
    Robotomy,
    Presidential,
    DEFAULT
};

class Intern
{
    private:
        formType formType;
        std::string type[3];
    public:
        void getCase(std::string caso);
        Intern();
        ~Intern();
        Form    *makeForm(std::string form, std::string target);
        class formNotFoundException : public std::exception{
            virtual const char* what() const throw();
        };
        
};


#endif
