/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:52:35 by derblang          #+#    #+#             */
/*   Updated: 2024/02/09 14:06:30 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP


#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <cstdlib> 
#include <ctime>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
    private:
    std::string _target;

    public:
    PresidentialPardonForm();
    PresidentialPardonForm(PresidentialPardonForm const& other);
    PresidentialPardonForm& operator=(PresidentialPardonForm const &other);
    PresidentialPardonForm(const std::string target);
    ~PresidentialPardonForm();

    void    execute(Bureaucrat const & executor) const;
    
};

#endif