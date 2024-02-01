//
// Created by reda ghouzraf on Sun Jan 28 18:13:17 2024
//
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{

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


void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    (void)executor;
}