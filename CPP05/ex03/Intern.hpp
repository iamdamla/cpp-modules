/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:12:22 by derblang          #+#    #+#             */
/*   Updated: 2024/02/12 11:59:26 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include <exception>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

class Intern  
{
    public:
    Intern(void);
    Intern& operator=(Intern const &other);
    ~Intern(void);
    AForm* makePresidentialForm(std::string const& target);
    AForm* makeRobotomyForm(std::string const& target);
    AForm* makeShrubberyForm(std::string const& target);
    AForm* makeForm( std::string const& formName, std::string const& target );

     class FormNotFoundException : public std::exception
        {
            public:
            virtual const char* what() const throw()
            {
                return (" Form not found" );
            }
        };
};


#endif