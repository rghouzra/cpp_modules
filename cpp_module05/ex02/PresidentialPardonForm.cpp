//
// Created by reda ghouzraf on Sun Jan 28 18:13:17 2024
//
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{

}
PresidentialPardonForm::PresidentialPardonForm(std::string _target): AForm(EXEC, SIGN)
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

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
     if(this->getSigned() && executor.getGrade() <= this->GetRequiredGradeExec())
        exec(this->target);
}