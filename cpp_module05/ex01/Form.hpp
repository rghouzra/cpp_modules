//
// Created by reda ghouzraf on Thu Jan 25 13:49:34 2024
//
#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include <stdbool.h>
class Form;
#include "Bureaucrat.hpp"

class Form
{
public:
    Form();
    Form(int16_t _required_grade_exec, int16_t required_grade_sign);
    Form(const Form& obj);
    ~Form();
    Form& operator=(const Form& obj);
//setters
    void setSigned(bool _bool);
//getters

    int16_t GetRequiredGradeExec() const;
    int16_t GetRequiredGradeSign() const;
    bool getSigned()const;
    const std::string &getName()const;
// impl
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
};

std::ostream &operator<<(std::ostream &os, const Form &Form);

#endif /*Form_HPP*/
