#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Pardon", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy) : Form(copy)
{
    *this = copy;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (PresidentialPardonForm &copy)
{
    this->target = copy.target;
    return (*this);
}

void    PresidentialPardonForm::execute() const
{
    std::cout << this->target <<  " has been pardoned by Zafod Beeblebrox." << std::endl;
}
