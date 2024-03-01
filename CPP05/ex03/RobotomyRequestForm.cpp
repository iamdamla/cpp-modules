/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:18:21 by derblang          #+#    #+#             */
/*   Updated: 2024/02/09 14:05:02 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

 RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyForm", 72, 45), _target("someone")
 {}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :  AForm("RobotomyForm", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other) : AForm(other.getName(), other.getSignatureGrade(), other.getExecutionGrade()), _target(other._target)
{
    if(other.getIsSigned())
        this->setSign();
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    if (this == &other)
        return (*this);
    return (*this);
}


RobotomyRequestForm::~RobotomyRequestForm(){}


void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
    if (executor.getGrade() > getExecutionGrade())
        throw AForm::GradeTooLowException();
    else if (!getIsSigned())
        throw AForm::FormNotSignedException();

    std::srand(std::time(0));
    int random = std::rand();
    if (random < RAND_MAX / 2) 
    {
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy of " << _target << " has failed." << std::endl;
    }
}
