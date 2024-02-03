//
// Created by reda ghouzraf on Sat Feb  3 12:04:10 2024
//
#include "Intern.hpp"

Intern::Intern()
{
    // std::cout << "Intern : Default Constructor Called" << std::endl;
}

Intern::~Intern()
{
    
}

Intern::Intern(const Intern& obj)
{
    if (this != &obj)
        *this = obj;
}

Intern& Intern::operator=(const Intern& obj)
{   if (this != &obj)
    {
        // this->attributes = obj.attributes;
        // ...
    }
    return (*this);
}


AForm *FindForm(AForm *p[3],  const std::string names[3], const std::string &to_find, int index){
    return  (index < 3 ?(names[index] == to_find ? (std::cout << "Intern creates " + names[index] + "\n",  p[index]):\
     FindForm(p, names, to_find, index + 1)) : (std::cerr << "cant find that form\n", (AForm *)NULL));
}

AForm *clean_garbage(AForm *survived, AForm *p[3]){
    AForm *ptr = NULL;
    for(int i = 0; i < 3; i++){
        (p[i] != survived ? (delete p[i], p[i] = NULL) : ptr = p[i]) ;
    }
    return ptr;
}

AForm *Intern::makeForm(const std::string &FormName, const std::string &target){
    AForm *p[3] = {new ShrubberyCreationForm(target), new PresidentialPardonForm(target), new RobotomyRequestForm(target)};
    const std::string names[3] = {"shrubbery creation",  "presidential pardon", "robotomy request"}; 
    return (clean_garbage(FindForm(p, names, FormName, 0), p));
}