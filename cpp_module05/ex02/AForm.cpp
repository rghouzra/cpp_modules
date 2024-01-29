//
// Created by reda ghouzraf on Thu Jan 25 13:49:34 2024
//
#include "AForm.hpp"


AForm::AForm():required_grade_exec(10),required_grade_sign(10)
{
    _signed = false;
    // std::cout << "AForm : Default Constructor Called" << std::endl;
}


AForm::AForm(int16_t _required_grade_exec, int16_t _required_grade_sign):\
    required_grade_exec(_required_grade_exec),\
    required_grade_sign(_required_grade_sign)
{
    _signed = false;

    if(_required_grade_exec > 150 || _required_grade_sign > 150)
        throw GradeException(GRADE_TO_LOW);

    else if(_required_grade_exec < 1 || _required_grade_sign < 1)
        throw GradeException(GRADE_TO_HIGH);

    // std::cout << "AForm : Default Constructor Called" << std::endl;
}

AForm::~AForm()
{
    // std::cout << "AForm : Destructor Called" << std::endl;
}

AForm::AForm(const AForm& obj): name(obj.getName()),required_grade_exec(obj.GetRequiredGradeExec()),
required_grade_sign(obj.GetRequiredGradeSign())
{
    // std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

AForm& AForm::operator=(const AForm& obj)
{
    // std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        this->_signed = obj.getSigned();
    }
    return (*this);
}
//setter
void AForm::setSigned(bool _bool){
    _signed  = _bool;
}

//getters
int16_t AForm::GetRequiredGradeSign() const{
    return required_grade_sign;
}
int16_t AForm::GetRequiredGradeExec() const{
    return required_grade_exec;
}

bool AForm::getSigned()const{
    return _signed;
}

const std::string &AForm::getName()const{
    return name;
}
//inner class

AForm::GradeException::~GradeException() throw() {}

const char *AForm::GradeException::what() const throw() {
	return exception.c_str();
}


AForm::GradeException::GradeException(std::string _exception) {
	exception = _exception;
}
//impl
void AForm::beSigned(const Bureaucrat &b){
    (void)b;
    if(b.getGrade() <= this->GetRequiredGradeSign())
    {
        this->setSigned(true);
        return ;
    }
    throw GradeException(GRADE_TO_LOW);
}

//overload out op

std::ostream &operator<<(std::ostream &os, const AForm &obj){
    os << obj.getName() <<" , AForm required grade to sign " << obj.GetRequiredGradeSign()\
    << " , AForm required grade to exec " << obj.GetRequiredGradeExec()\
    <<" signed: " <<obj.getSigned() <<'\n';
    return os;
}

