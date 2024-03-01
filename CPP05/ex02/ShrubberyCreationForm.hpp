/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:36:03 by derblang          #+#    #+#             */
/*   Updated: 2024/02/09 11:42:10 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP


#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
#include <fstream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm( ShrubberyCreationForm const& other );
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const &other);
        ShrubberyCreationForm(const std::string target);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const& executor) const;

};

#endif