//
// Created by reda ghouzraf on Sun Jan 28 18:12:28 2024
//
#include "ShrubberyCreationForm.hpp"

void CreateTreeAsciiArt(){
    // std::ostream file()
    // std::cout << "  *****  " << std::endl;
    // std::cout << " *     * " << std::endl;
    // std::cout << "*  O O  *" << std::endl;
    // std::cout << "*   ∆   *" << std::endl;
    // std::cout << " *     * " << std::endl;
    // std::cout << "  *****  " << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string _target){
    target = _target;
}

// ShrubberyCreationForm::ShrubberyCreationForm()
// {
    
// }

ShrubberyCreationForm::~ShrubberyCreationForm()
{
   
}


const std::string &ShrubberyCreationForm::getTarget() const{
    return target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj)
{
   
    if (this != &obj)
        *this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
    if (this != &obj){
        this->target = obj.getTarget();
    }
    return (*this);
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    (void)executor;
}