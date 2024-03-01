/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:22:08 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/02/09 12:41:12 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
    
AForm::AForm( void ): _name("form"), _isSigned(false), _signatureGrade(150), _executionGrade(150)
{
}

AForm::AForm( std::string const name, int signatureGrade, int executionGrade ) : _name(name), _isSigned(false), _signatureGrade(signatureGrade), _executionGrade(executionGrade)
{
        if(signatureGrade < 1 || executionGrade < 1)
            throw AForm::GradeTooHighException();
        if(signatureGrade > 150 || executionGrade > 150)
            throw AForm::GradeTooLowException();
  
}
AForm& AForm::operator=(const AForm &other)
{
    if(this == &other)
        return (*this);
    return (*this);
}
AForm::AForm(AForm const& other): _name(other._name),_isSigned(other._isSigned), _signatureGrade(other._signatureGrade), _executionGrade(other._executionGrade) 
{}
AForm::~AForm(void){}

std::string AForm::getName(void)const
{
    return (this->_name);
}
int AForm::getSignatureGrade(void) const
{
    return (this->_signatureGrade);
}
int AForm::getExecutionGrade(void) const
{
    return (this->_executionGrade);
}
bool AForm::getIsSigned(void) const
{
    if(_isSigned == true)
        return true;
    else
        return false;
}

void AForm::setSign(void)
{
    this->_isSigned = true;
}



void AForm::beSigned(Bureaucrat const& worker )
{
    if(worker.getGrade() > this->getSignatureGrade())
        throw GradeTooLowException();
    else
        this->setSign();
}

std::ostream& operator<<(std::ostream& os, const AForm& form)
{
    os << "Form: " << form.getName() << ", grade for signature: " << form.getSignatureGrade();
    os << ", grade for execution: " << form.getExecutionGrade() << std::endl;
    return (os);
}

