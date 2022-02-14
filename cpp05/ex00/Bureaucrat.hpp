#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <sstream>
#include <string>
#include <exeption>

class Bureaucrat
{
        private:
            std::string const name;
			int	grade;
        public:
			Bureaucrat(const std::string name, int grade);
            Bureaucrat();
            ~Bureaucrat();
			Bureaucrat &operator = (Bureaucrat & copy);
			std::string const getName();
			int				getGrade();
			void increment(int num);
			void decrement(int num);
			class GradeTooHigh : public std::exception{
				public:
					virtual const char* what() const throw();
	
			};
			class GradeTooLow : public std::exeption{
				public:
					virtual const char* what() const throw();
			};
};

std::ostream& operator<<(std::ostream &os, Bureaucrat & i);

#endif
