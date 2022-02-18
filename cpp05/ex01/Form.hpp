#ifndef FORM_HPP
#define FORM_HPP

#include <string> 
#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool is_signed;
        const int  gradeToSign;
        const int  gradeToExec;

    public:
        //Form();
		Form(Form & copy);
        Form(const std::string name, const int gradeToSign, const int gradeToExec);
        ~Form();
		Form &operator = (Form & copy);
        //void	setName(std::string name);
		std::string	getName();
		int getSignGrade();
		int getExecGrade();
		std::string seeIfSigned();
		void beSigned(Bureaucrat &b);
        class GradeTooHighException : public std::exception{
				public:
					virtual const char* what() const throw();
	
			};
			class GradeTooLowException : public std::exception{
				public:
					virtual const char* what() const throw();
			};
};

std::ostream& operator<<(std::ostream & os, Form & i);

#endif