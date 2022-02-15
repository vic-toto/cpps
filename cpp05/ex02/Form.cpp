#include "Form.hpp"

//Form::Form()
//{
//    this->gradeToExec = 0;
//    this->gradeToSign = 0;
//}

Form::~Form()
{
}

Form::Form(Form &copy) : name(copy.getName()), gradeToSign(copy.gradeToSign), gradeToExec(copy.gradeToExec)
{
    *this = copy;
}

Form & Form::operator = (Form & copy)
{
    this->is_signed = copy.is_signed;
    return (*this);
}

void    Form::setName(std::string const name)
{
    this->name = name;
}

std::string Form::getName()
{
    return (this->name);
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExec) : name(name), gradeToSign(gradeToSign), gradeToExec(gradeToExec)
{
    if (gradeToSign > 150 || gradeToExec > 150)
        throw GradeTooHighException();
    else if (gradeToSign < 1 || gradeToExec < 1)
        throw GradeTooLowException();
    this->is_signed = false;
    //this->gradeToExec = gradeToExec;
    //this->gradeToSign = gradeToSign;
}

int     Form::getSignGrade()
{
    return (this->gradeToSign);
}

int Form::getExecGrade()
{
    return (this->gradeToExec);
}

std::string Form::seeIfSigned()
{
    if (this->is_signed == true)
        return ("Yes");
    else
        return ("No");
}

void    Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > gradeToSign)
		throw GradeTooLowException();
	this->is_signed = true;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "GRADE IS TOO HIGH";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "GRADE IS TOO LOW";
}

std::ostream& operator<<(std::ostream & os, Form & i)
{
	return(os << i.getName() << ", grade to execute: " << i.getExecGrade() << ", gradeToSign: " << i.getSignGrade() << " Signed: " << i.seeIfSigned());
}