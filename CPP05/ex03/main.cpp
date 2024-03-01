/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 10:26:58 by derblang          #+#    #+#             */
/*   Updated: 2024/02/14 10:16:55 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try{
    Intern some;
    AForm* rrf;
    rrf = some.makeForm("Robotomy Form", "Bender");
    std::cout << *rrf << std::endl;
    Bureaucrat b("Mark", 45);
    b.signForm(*rrf);
    b.executeForm(*rrf);
    delete rrf;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    
    return 0;
}