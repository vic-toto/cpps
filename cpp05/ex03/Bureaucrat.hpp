#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
        private:
            std::string name;
			int	grade;
        public:
			Bureaucrat(const std::string name, int grade);
            Bureaucrat();
            ~Bureaucrat();
			const Bureaucrat & operator = (const Bureaucrat & copy);
			void	setName(const std::string name);
			void	setGrade(int grade);
			std::string const getName() const;
			int	getGrade() const;
			void increment(int num);
			void decrement(int num);
			void signForm(Form &Form);
			void execForm(const Form &form);
			class GradeTooHighException : public std::exception{
				public:
					virtual const char* what() const throw();
	
			};
			class GradeTooLowException : public std::exception{
				public:
					virtual const char* what() const throw();
			};
};

std::ostream& operator<<(std::ostream &os, Bureaucrat & i);

#endif
