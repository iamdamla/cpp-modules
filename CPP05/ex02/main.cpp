/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:26:58 by derblang          #+#    #+#             */
/*   Updated: 2024/02/14 10:14:32 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try {
        AForm* form1 = new ShrubberyCreationForm("tree");
        Bureaucrat bored =  Bureaucrat("Shrubbery", 47);
        bored.signForm(*form1);
        bored.executeForm(*form1);
        std::cout << std::endl;
        
        AForm *form2 = new RobotomyRequestForm("robotomize");
        Bureaucrat robot =  Bureaucrat("Robotomy", 2);
        robot.signForm(*form2);
        robot.executeForm(*form2);
        std::cout << std::endl;


        AForm *form3 = new PresidentialPardonForm("pardonooo");
        Bureaucrat president = Bureaucrat("Presidential", 3);
        president.signForm(*form3);
        president.executeForm(*form3);

        
        delete form1;
        delete form2;
        delete form3;
    } catch (const AForm::GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const AForm::FormNotSignedException& e) {
                std::cerr << e.what() << std::endl;

    }
}