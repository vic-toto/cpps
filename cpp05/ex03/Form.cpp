#include "Form.hpp"

//Form::Form()
//{
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


std::string Form::getName() const
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

int     Form::getSignGrade() const
{
    return (this->gradeToSign);
}

int Form::getExecGrade() const
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

const char* Form::notSignedException::what() const throw() {
	return "Not Signed";
}

std::ostream& operator<<(std::ostream & os, Form & i)
{
	return(os << i.getName() << ", grade to execute: " << i.getExecGrade() << ", gradeToSign: " << i.getSignGrade() << " Signed: " << i.seeIfSigned());
}

void Form::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->gradeToExec)
		throw GradeTooLowException();
	if (this->is_signed == false)
		throw notSignedException();
	execute();
}
