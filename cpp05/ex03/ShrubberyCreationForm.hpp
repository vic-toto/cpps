#ifndef SHUBBERYCREATIONFORM_HPP
#define SHUBBERYCREATIONFORM_HPP
#include <sstream>
#include <string> 
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator = (ShrubberyCreationForm & copy);
        ~ShrubberyCreationForm();
        void execute() const ;
};

#endif