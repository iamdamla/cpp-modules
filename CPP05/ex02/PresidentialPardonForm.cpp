/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:53:52 by derblang          #+#    #+#             */
/*   Updated: 2024/02/09 14:08:48 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialForm", 25, 5), _target("anonym")
{}
PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialForm", 25, 5), _target(target){}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& other) : AForm(other.getName(), other.getSignatureGrade(), other.getExecutionGrade()), _target(other._target)
{
    if(other.getIsSigned())
        this->setSign();
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &other)
{
    if(this == &other)
        return (*this);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
     if (executor.getGrade() > getExecutionGrade())
        throw AForm::GradeTooLowException();
    else if (!getIsSigned())
        throw AForm::FormNotSignedException();
    else
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}