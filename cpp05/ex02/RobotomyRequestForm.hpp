#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <string>
#include <sstream>
#include <random>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &copy);
		RobotomyRequestForm &operator = (RobotomyRequestForm & copy);
		~RobotomyRequestForm();
		void	execute() const;
};

#endif