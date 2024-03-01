/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damlaerblang <damlaerblang@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:16:54 by derblang          #+#    #+#             */
/*   Updated: 2024/02/08 10:17:20 by damlaerblan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("anonym"), _grade(150)
{
    std::cout << _name << "has hired with a grade of " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
        if(grade < 1)
            throw GradeTooHighException();
        else if(grade > 150)
            throw GradeTooLowException();
        else 
            _grade = grade;

        std::cout << _name << " started the job with a grade of " << _grade << std::endl;

 
}

Bureaucrat::Bureaucrat(Bureaucrat const& other) : _name(other._name), _grade(other._grade)
{
    std::cout << "Copy" << std::endl;
}

Bureaucrat&	Bureaucrat::operator = ( const Bureaucrat& other )
{
	if (this == &other)
		return (*this);
	this->_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(){}

std::string Bureaucrat::getName(void) const
{
    return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void Bureaucrat::increaseGrade()
{
   try{
    if(_grade - 1 < 1)
        throw GradeTooHighException();
    else
        this->_grade--;
   }
   catch (GradeTooHighException& e){
    std::cerr << e.what() << std::endl;
   }
    
}

void Bureaucrat::decreaseGrade()
{
    try{
        if(_grade + 1 > 150)
            throw GradeTooLowException();
        else
            this->_grade++;
    }
    catch (GradeTooLowException& e){
        std::cerr << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& employee)
{
    return (os << employee.getName() << ", bureaucrat grade: " << employee.getGrade());
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("\e[0;31mException: Grade is too high!\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("\e[0;34mException: Grade is too low!\n");
}

