//
// Created by reda ghouzraf on Sun Jan 28 18:13:00 2024
//
#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <iostream>
#include "AForm.hpp"
#define SIGN 72
#define EXEC 45
class RobotomyRequestForm
{
public:
    RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& obj);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator=(const RobotomyRequestForm& obj);
    void execute(Bureaucrat const & executor) const;
private:
};
#endif /*RobotomyRequestForm_HPP*/
