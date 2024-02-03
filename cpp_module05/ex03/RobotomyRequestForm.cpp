//
// Created by reda ghouzraf on Sun Jan 28 18:13:00 2024
//
#include "RobotomyRequestForm.hpp"

#define SIGN 72
#define EXEC 45
RobotomyRequestForm::RobotomyRequestForm()
{
    // std::cout << "RobotomyRequestForm : Default Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &_target): AForm("RobotomyRequestForm",EXEC, SIGN){
    target = _target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "RobotomyRequestForm : Destructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj)
{
    // std::cout << "Copy Constructor Called" << std::endl;
    if (this != &obj)
        *this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
    // std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &obj)
    {
        this->target = obj.target;
        // this->attributes = obj.attributes;
        // ...
    }
    return (*this);
}

static void exec(const std::string &target){
    static int i;
    std::cout << "driling noises ";
    if(i & 1)
        std::cout << target + " has been robotimzed\n";
    else
        std::cout << target + " robotimization failed\n";
    i++;
}

bool RobotomyRequestForm::execute(Bureaucrat const & executor)const{
     if(this->getSigned() && executor.getGrade() <= this->GetRequiredGradeExec()){
        exec(this->target);
        return true;
     }
     return false;
}
