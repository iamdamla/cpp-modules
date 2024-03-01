/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:22:08 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/02/14 10:13:57 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
    
Form::Form( void ): _name("form"), _isSigned(false), _signatureGrade(150), _executionGrade(150)
{
}

Form::Form( std::string const name, int signatureGrade, int executionGrade ) : _name(name), _isSigned(false), _signatureGrade(signatureGrade), _executionGrade(executionGrade)
{
        if(signatureGrade < 1 || executionGrade < 1)
            throw Form::GradeTooHighException();
        if(signatureGrade > 150 || executionGrade > 150)
            throw Form::GradeTooLowException();
  
}
Form& Form::operator=(const Form &other)
{
    if(this == &other)
        return (*this);
    return (*this);
}
Form::Form(Form const& other): _name(other._name),_isSigned(other._isSigned), _signatureGrade(other._signatureGrade), _executionGrade(other._executionGrade) 
{}
Form::~Form(void){}

std::string Form::getName(void)const
{
    return (this->_name);
}
int Form::getSignatureGrade(void) const
{
    return (this->_signatureGrade);
}
int Form::getExecutionGrade(void) const
{
    return (this->_executionGrade);
}
bool Form::getIsSigned(void) const
{
    return (this->_isSigned);
}

void Form::setSign(void)
{
    this->_isSigned = true;
}

void Form::beSigned(Bureaucrat const& worker )
{
    if(worker.getGrade() > this->getSignatureGrade())
        throw GradeTooLowException();
    else
        this->setSign();
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form: " << form.getName() << ", grade for signature: " << form.getSignatureGrade();
    os << ", grade for execution: " << form.getExecutionGrade() << std::endl;
    return (os);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("\e[0;31mForm Exception: Grade is too high!\n");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("\e[0;34mForm Exception: Grade is too low!\n");
}