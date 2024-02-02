//
// Created by reda ghouzraf on Sun Jan 28 18:13:17 2024
//
#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include <iostream>
#include  "AForm.hpp"


class PresidentialPardonForm : public AForm
{
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string _target);
    PresidentialPardonForm(const PresidentialPardonForm& obj);
    ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(const PresidentialPardonForm& obj);
    bool execute(Bureaucrat const & executor) const;
private:
    std::string target;
};
#endif /*PresidentialPardonForm_HPP*/
