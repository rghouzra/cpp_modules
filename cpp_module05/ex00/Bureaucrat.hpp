//
// Created by reda ghouzraf on Wed Jan 24 02:54:08 2024
//
#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>



class Bureaucrat
{
public:
    Bureaucrat();
	Bureaucrat(int16_t grade);
    Bureaucrat(const Bureaucrat& obj);
    ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat& obj);
	/*getters*/
	int16_t getGrade() const;
	const std::string &getName();
	/*setters*/
	void setGrade(int16_t grade);
	//inner class
class GradeException: public std::exception{
private:
	std::string exception;
public:
	GradeException(std::string _exception);
	~GradeException() throw();
	const char *what() const throw();
};
private:
	const std::string name;
	int16_t grade;
};
#endif /*Bureaucrat_HPP*/
