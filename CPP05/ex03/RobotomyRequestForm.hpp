/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 13:15:03 by derblang          #+#    #+#             */
/*   Updated: 2024/02/09 13:36:11 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP


#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <cstdlib> 
#include <ctime>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    private:
    std::string _target;

    public:
    RobotomyRequestForm();
    RobotomyRequestForm(RobotomyRequestForm const& other);
    RobotomyRequestForm& operator=(RobotomyRequestForm const &other);
    RobotomyRequestForm(const std::string target);
    ~RobotomyRequestForm();

    void    execute(Bureaucrat const & executor) const;
    
};

#endif