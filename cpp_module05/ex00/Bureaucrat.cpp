//
// Created by reda ghouzraf on Wed Jan 24 02:54:08 2024
//
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("reda")
{
    std::cout << "Bureaucrat : Default Constructor Called" << std::endl;
	grade = 1;
}

Bureaucrat::Bureaucrat(int16_t grade)
{
	std::cout << "Bureaucrat : Paramterized Constructor Called" << std::endl;
	if(grade < 1){

		throw Bureaucrat::GradeException("radeTooHighException");
	}
	else if(grade > 150){
		throw Bureaucrat::GradeException("radeTooLowException");
	}
	this->grade = grade;
}


Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat : Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

int16_t Bureaucrat::getGrade() const{
	return this->grade;
}

const std::string &Bureaucrat::getName(){
	return name;
}

void Bureaucrat::setGrade(int16_t grade) {
	if(grade < 1){

		throw Bureaucrat::GradeException("GradeTooHighException\n");
	}
	else if(grade > 150){
		throw Bureaucrat::GradeException("GradeTooLowException\n");
	}
	this->grade = grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        this->grade = obj.getGrade();
    }
    return (*this);
}




//inner class implementation
Bureaucrat::GradeException::~GradeException() throw() {}

const char *Bureaucrat::GradeException::what() const throw() {
	return exception.c_str();
}


Bureaucrat::GradeException::GradeException(std::string _exception) {
	exception = _exception;
}