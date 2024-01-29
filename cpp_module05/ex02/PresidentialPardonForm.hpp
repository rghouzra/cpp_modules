//
// Created by reda ghouzraf on Sun Jan 28 18:13:17 2024
//
#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include <iostream>
#include  "AForm.hpp"
#define SIGN 25
#define EXEC 5

class PresidentialPardonForm : AForm
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm& obj);
    ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
    void execute(Bureaucrat const & executor) const;
private:
};
#endif /*PresidentialPardonForm_HPP*/
