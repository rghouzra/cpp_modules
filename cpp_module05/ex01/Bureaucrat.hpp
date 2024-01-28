//
// Created by reda ghouzraf on Wed Jan 24 02:54:08 2024
//
#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>

#define GRADE_TO_LOW "GradeTooLowException"
#define GRADE_TO_HIGH "GradeTooHighException"

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
	const std::string &getName() const;

	/*setters*/
	void setGrade(int16_t grade);
	/*impl*/
	void incrementGrade();
	void decrementGrade();

	//inner exception class
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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif /*Bureaucrat_HPP*/
