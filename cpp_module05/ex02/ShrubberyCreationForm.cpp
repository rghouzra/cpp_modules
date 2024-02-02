//
// Created by reda ghouzraf on Sun Jan 28 18:12:28 2024
//
#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(){
    target = "undefined";
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):AForm(EXEC, SIGN){
    target = _target;
}



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

static void exec(std::string target){
    std::ofstream file;

    file.open(target + "_shrubbery");
    if(!file.good()) return ;
    file << "  *****  " << std::endl;
    file << " *     * " << std::endl;
    file << "*  O O  *" << std::endl;
    file << "*   ∆   *" << std::endl;
    file << " *     * " << std::endl;
    file << "  *****  " << std::endl;
}


void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if(this->getSigned() && executor.getGrade() <= this->GetRequiredGradeExec())
        exec(this->target);
}