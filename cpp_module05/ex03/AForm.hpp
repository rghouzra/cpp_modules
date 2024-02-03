//
// Created by reda ghouzraf on Thu Jan 25 13:49:34 2024
//
#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <stdbool.h>
#include <fstream>
class AForm;
#include "Bureaucrat.hpp"



class AForm
{
public:
//orthodox cannonical form
    AForm();
    AForm(const std::string &_name, int16_t _required_grade_exec, int16_t required_grade_sign);
    AForm(int16_t _required_grade_exec, int16_t required_grade_sign);
    AForm(const AForm& obj);
    virtual ~AForm();
    AForm& operator=(const AForm& obj);

//setters
    void setSigned(bool _bool);

//getters    
    int16_t GetRequiredGradeExec() const;
    int16_t GetRequiredGradeSign() const;
    bool getSigned()const;
    const std::string &getName()const;

// impl
 
    virtual bool execute(Bureaucrat const & executor) const = 0;
 
    void beSigned(const Bureaucrat &b);

private:
    const std::string name;
    bool _signed;
    const int16_t required_grade_exec;
    const int16_t required_grade_sign;

    //inner class 
    class GradeException: public std::exception{
		private:
			std::string exception;
	
		public:
			GradeException(std::string _exception);
			~GradeException() throw();
			const char *what() const throw();
	};
/*-------------------------*/
};

std::ostream &operator<<(std::ostream &os, const AForm &AForm);

#endif /*AForm_HPP*/
