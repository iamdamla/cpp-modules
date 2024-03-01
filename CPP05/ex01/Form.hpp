/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damlaerblang <damlaerblang@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:10:32 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/02/08 11:03:44 by damlaerblan      ###   ########.fr       */
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

class Form
{
    private:
    const std::string _name;
    bool _isSigned;
    int const _signatureGrade;
    const int _executionGrade;

    public:
    Form( void );
    Form( std::string const name, int signatureGrade, int executionGrade );
    Form(Form const& other);
    Form& operator = (const Form &other);
    ~Form(void);

    std::string getName(void)const;
    int getSignatureGrade(void) const;
    int getExecutionGrade(void) const;
    bool getIsSigned(void) const;
    void setSign(void);
    void beSigned(Bureaucrat const& worker );

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

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif