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
       // Form();
		Form(Form & copy);
        Form(const std::string name, const int gradeToSign, const int gradeToExec);
        virtual ~Form();
		Form &operator = (Form & copy);
		std::string	getName() const;
		int getSignGrade();
		int getExecGrade();
		std::string seeIfSigned();
		void beSigned(Bureaucrat &b);
		void	execute(Bureaucrat const & executor) const;
		virtual void execute() const = 0;
        class GradeTooHighException : public std::exception{
				public:
					virtual const char* what() const throw();
	
			};
			class GradeTooLowException : public std::exception{
				public:
					virtual const char* what() const throw();
			};
			class notSignedException : public std::exception{
				public:
					virtual const char* what() const throw();
			};
};

std::ostream& operator<<(std::ostream & os, Form & i);

#endif