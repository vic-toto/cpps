#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shubbery", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &copy) : Form(copy)
{
    *this = copy;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator= (ShrubberyCreationForm &uguale)
{
	this->target = uguale.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void    ShrubberyCreationForm::execute() const
{
    std::ofstream file;

    file.open(this->target + "shubbery");
    file << "\n\
               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&\\%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n\
	\n";
	file.close();
}
