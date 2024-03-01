/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:42:14 by derblang          #+#    #+#             */
/*   Updated: 2024/02/09 14:10:35 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyForm", 145, 137), _target("the intern")
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : AForm("ShrubberyForm", 145, 137), _target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other) : AForm(other.getName(), other.getSignatureGrade(),
other.getExecutionGrade()), _target(other._target)
{
    if(other.getIsSigned())
        this->setSign();
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other)
 {
    if(this == &other)
        return *this;
    return (*this);
 }

 void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
 {
   {
    if(executor.getGrade() > getExecutionGrade())
        throw AForm::GradeTooLowException();
    else if(!getIsSigned())
        throw AForm::FormNotSignedException();
   }
    std::ofstream outputFile((_target + "_shruberry").c_str());
    if(outputFile.is_open())
    {
        outputFile << "               ,@@@@@@@,\n"
              "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
              "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
              "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
              "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
              "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
              "   `&%\\ ` /%&'    |.|        \\ '|8'\n"
              "       |o|        | |         | |\n"
              "       |.|        | |         | |\n"
              "    \\\\/ .\\_//_/__/  ,\\_//__\\\\/.  \\_//__/\n"
              "------------------------------------------------\n";

        outputFile.close();
    }
    else
        std::cout << "The outputfile can't open\n" << std::endl;
 }