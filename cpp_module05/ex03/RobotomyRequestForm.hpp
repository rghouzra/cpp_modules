//
// Created by reda ghouzraf on Sun Jan 28 18:13:00 2024
//
#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string &_target);
    RobotomyRequestForm(const RobotomyRequestForm& obj);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
    bool execute(Bureaucrat const & executor) const;
private:
    std::string target;
};
#endif /*RobotomyRequestForm_HPP*/
