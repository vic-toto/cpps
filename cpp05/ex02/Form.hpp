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
        std::string name;
        bool is_signed;
        int  gradeToSign;
        int  gradeToExec;

    public:
        Form();
		Form(Form & copy);
        Form(const std::string name, const int gradeToSign, const int gradeToExec);
        ~Form();
		Form &operator = (Form & copy);
        void	setName(std::string name);
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