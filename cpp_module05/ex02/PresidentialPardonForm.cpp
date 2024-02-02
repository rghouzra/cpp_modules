//
// Created by reda ghouzraf on Sun Jan 28 18:13:17 2024
//
#include "PresidentialPardonForm.hpp"

#define SIGN 25
#define EXEC 5

PresidentialPardonForm::PresidentialPardonForm()
{

}
PresidentialPardonForm::PresidentialPardonForm(std::string _target): AForm("PresidentialPardonForm",EXEC, SIGN)
{
    target = _target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj)
{

    if (this != &obj)
        *this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
    if (this != &obj)
    {
        // this->attributes = obj.attributes;
        // ...
    }
    return (*this);
}

static void exec(const std::string &target){
    std::cout << target + " has been pardoned by Zaphod Beeblebrox\n";
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const{
     if(this->getSigned() && executor.getGrade() <= this->GetRequiredGradeExec()){
        exec(this->target);
        return true;
     }
    return false;
}