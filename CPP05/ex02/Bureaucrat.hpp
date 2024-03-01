/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damlaerblang <damlaerblang@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:15:38 by derblang          #+#    #+#             */
/*   Updated: 2024/02/11 11:26:39 by damlaerblan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class AForm;

class Bureaucrat
{
    private:
    const std::string _name;
    int _grade;

    public:
    Bureaucrat();
    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const& other);
    Bureaucrat&	operator = ( const Bureaucrat& other );
    ~Bureaucrat();
    std::string getName(void) const;
    int getGrade(void) const;
    void increaseGrade();
    void decreaseGrade();
    void signForm(AForm& form);
    void executeForm(AForm const &form);
    
    class GradeTooHighException : public std::exception
    {
        public:
        const char* what() const throw();
    };
     class GradeTooLowException : public std::exception
    {
        public:
        const char* what() const throw();
    };
};
std::ostream&				operator << (std::ostream& os, const Bureaucrat& employee);

#endif