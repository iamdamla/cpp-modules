/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:17:35 by derblang          #+#    #+#             */
/*   Updated: 2024/02/07 15:16:50 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat Harvey("Harvey", 8);
    std::cout << Harvey << std::endl;
    Harvey.increaseGrade();
    std::cout << Harvey << std::endl;

    std::cout << std::endl;

    Bureaucrat Mark("Mark", 150);
    std::cout << Mark << std::endl;
    Mark.decreaseGrade();
    std::cout << Mark << std::endl;
    
    std::cout << std::endl;

    Bureaucrat Rachel("Rachel", 1);
    std::cout << Rachel << std::endl;
    Rachel.increaseGrade();
    std::cout << Rachel << std::endl;

}