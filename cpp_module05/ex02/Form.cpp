//
// Created by reda ghouzraf on Thu Jan 25 13:49:34 2024
//
#include "Form.hpp"


Form::Form():required_grade_exec(10),required_grade_sign(10)
{
    _signed = false;
    // std::cout << "Form : Default Constructor Called" << std::endl;
}


Form::Form(int16_t _required_grade_exec, int16_t _required_grade_sign):\
    required_grade_exec(_required_grade_exec),\
    required_grade_sign(_required_grade_sign)
{
    _signed = false;

    if(_required_grade_exec > 150 || _required_grade_sign > 150)
        throw GradeException(GRADE_TO_LOW);

    else if(_required_grade_exec < 1 || _required_grade_sign < 1)
        throw GradeException(GRADE_TO_HIGH);

    // std::cout << "Form : Default Constructor Called" << std::endl;
}

Form::~Form()
{
    // std::cout << "Form : Destructor Called" << std::endl;
}

Form::Form(const Form& obj): name(obj.getName()),required_grade_exec(obj.GetRequiredGradeExec()),
required_grade_sign(obj.GetRequiredGradeSign())
{
    // std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

Form& Form::operator=(const Form& obj)
{
    // std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        this->_signed = obj.getSigned();
    }
    return (*this);
}
//setter
void Form::setSigned(bool _bool){
    _signed  = _bool;
}

//getters
int16_t Form::GetRequiredGradeSign() const{
    return required_grade_sign;
}
int16_t Form::GetRequiredGradeExec() const{
    return required_grade_exec;
}

bool Form::getSigned()const{
    return _signed;
}

const std::string &Form::getName()const{
    return name;
}
//inner class

Form::GradeException::~GradeException() throw() {}

const char *Form::GradeException::what() const throw() {
	return exception.c_str();
}


Form::GradeException::GradeException(std::string _exception) {
	exception = _exception;
}
//impl
void Form::beSigned(const Bureaucrat &b){
    if(b.getGrade() <= this->GetRequiredGradeSign())
    {
        this->setSigned(true);
        return ;
    }
    throw GradeException(GRADE_TO_LOW);
}

//overload out op

std::ostream &operator<<(std::ostream &os, const Form &obj){
    os << obj.getName() <<" , form required grade to sign " << obj.GetRequiredGradeSign()\
    << " , form required grade to exec " << obj.GetRequiredGradeExec()\
    <<" signed: " <<obj.getSigned() <<'\n';
    return os;
}

