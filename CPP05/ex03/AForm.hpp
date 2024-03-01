/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:10:32 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/02/09 12:45:17 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include <string>
#include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
    const std::string _name;
    bool _isSigned;
    int const _signatureGrade;
    const int _executionGrade;

    public:
    AForm( void );
    AForm( std::string const name, int signatureGrade, int executionGrade );
    AForm(AForm const& other);
    AForm& operator = (const AForm &other);
    virtual ~AForm(void);

    std::string getName(void)const;
    int getSignatureGrade(void) const;
    int getExecutionGrade(void) const;
    bool getIsSigned(void) const;
    void setSign(void);
    void beSigned(Bureaucrat const& worker );

    virtual void execute(Bureaucrat const& executor) const = 0;

    class GradeTooHighException : public std::exception
    {
        public:
       virtual const char* what() const throw()
       {
        return ("\e[0;31mForm Exception: Grade is too high!\n");
       }
    };
    class GradeTooLowException : public std::exception
    {
        public:
        virtual const char* what() const throw()
        {
            return ("\e[0;34mForm Exception: Grade is too low!\n");
        }
    };
    class FormNotSignedException : public std::exception
    {
        public:
        const char* what() const throw()
        {
            return ("\e[0;34mForm Exception: The Form is not signed!\n");
        }
    };
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif