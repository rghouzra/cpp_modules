//
// Created by reda ghouzraf on Sun Jan 28 18:12:28 2024
//
#ifndef ShrubberyCreationForm_HPP
#define ShrubberyCreationForm_HPP

#include <iostream>
#include "AForm.hpp"
#define SIGN 145
#define EXEC 137
class ShrubberyCreationForm : public AForm
{
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string _target);
    ShrubberyCreationForm(const ShrubberyCreationForm& obj);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& obj);
    void execute(Bureaucrat const & executor) const;
private:
    std::string target;
};
#endif /*ShrubberyCreationForm_HPP*/
