//
// Created by reda ghouzraf on Sat Feb  3 12:04:10 2024
//
#ifndef Intern_HPP
#define Intern_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern
{
public:
    Intern();
    Intern(const Intern& obj);
    ~Intern();
    Intern& operator=(const Intern& obj);
    AForm *makeForm(const std::string &FormName, const std::string &target);
private:
};
#endif /*Intern_HPP*/
