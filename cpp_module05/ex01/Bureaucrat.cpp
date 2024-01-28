//
// Created by reda ghouzraf on Wed Jan 24 02:54:08 2024
//
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("reda")
{
    // std::cout << "Bureaucrat : Default Constructor Called" << std::endl;
	grade = 1;
}

Bureaucrat::Bureaucrat(int16_t grade):name("reda")
{
	// std::cout << "Bureaucrat : Paramterized Constructor Called" << std::endl;
	if(grade < 1){
		throw Bureaucrat::GradeException(GRADE_TO_HIGH);
	}
	else if(grade > 150){
		throw Bureaucrat::GradeException(GRADE_TO_LOW);
	}
	this->grade = grade;
}


Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat : Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
    // std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj){
        *this = obj;
	}
}

int16_t Bureaucrat::getGrade() const{
	return this->grade;
}

const std::string &Bureaucrat::getName() const{
	return name;
}

void Bureaucrat::setGrade(int16_t grade) {
	if(grade < 1){
		throw Bureaucrat::GradeException(GRADE_TO_HIGH);
	}
	else if(grade > 150){
		throw Bureaucrat::GradeException(GRADE_TO_LOW);
	}
	this->grade = grade;
}


void Bureaucrat::incrementGrade(){
	if(grade == 1){
		throw Bureaucrat::GradeException(GRADE_TO_HIGH);
	}
	grade --;
}
void Bureaucrat::decrementGrade(){
	if(grade == 150){
		throw Bureaucrat::GradeException(GRADE_TO_LOW);
	}
	grade ++;
}


void Bureaucrat::signForm(const Form &form) const{
	if (form.getSigned()){	
		std::cout << this->getName() << " signed " << form.getName() << '\n';
	}
	else {
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because grade to low";
	}
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj)
{
    // std::cout << "Copy Assignment Operator Called" << std::endl;
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
//overload ostream
std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj){
	os << obj.getName() <<" , bureaucrat grade " << obj.getGrade();
	return os;
}