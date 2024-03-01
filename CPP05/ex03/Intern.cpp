/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:17:52 by derblang          #+#    #+#             */
/*   Updated: 2024/02/14 10:15:20 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern(){}
Intern& Intern::operator=(Intern const &other)
{
    if(this == &other)
        return (*this);
    return (*this);
}
Intern::~Intern(){}


AForm* Intern::makeShrubberyForm(std::string const& target)
{
    return new ShrubberyCreationForm(target);
}
AForm* Intern::makeRobotomyForm(std::string const& target)
{
    return new RobotomyRequestForm(target);
}
AForm* Intern::makePresidentialForm(std::string const& target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm( std::string const& formName, std::string const& target )
{
    AForm *(Intern::*f[3])(const std::string&) = {&Intern::makePresidentialForm, &Intern::makeShrubberyForm, &Intern::makeRobotomyForm};
    std::string forms[3] = {"Presidential Form", "Shrubbery Form", "Robotomy Form"};
    int i;
    for(i = 0; i < 3; i++)
    {
        if(forms[i] == formName)
        {
            std::cout << formName << " has created by Intern" << std::endl;
            return(this->*f[i])(target);
        }
    }
    std::cout << formName <<"  doesn't exist" << std::endl;
        throw FormNotFoundException();
}
