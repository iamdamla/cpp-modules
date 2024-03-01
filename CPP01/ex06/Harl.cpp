/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:25:23 by derblang          #+#    #+#             */
/*   Updated: 2023/10/23 15:13:57 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}

void Harl::debug(void)
{
    std::cout << "\033[1;32mDEBUG\n";
    std::cout << "I love having extra bacon for my";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.";
    std::cout << "I really do!" << std::endl;
}
void Harl::info(void)
{
    std::cout << "\033[1;35mINFO\n";
    std::cout << "I cannot believe adding extra bacon costs more money.";
    std::cout << "You didnt put enough bacon in my burger!";
    std::cout << "If you did, I wouldnt be asking for more!" << std::endl;
}
void Harl::warning(void)
{
    std::cout << "\033[38;5;208mWARNING\n" ;
    std::cout <<  "I think I deserve to have some extra bacon for free.";
    std::cout << "I've been coming for years whereas you started working here since last month. " << std::endl;    
}
void Harl::error(void)
{
    std::cout << "\033[1;33mERROR\n";
    std::cout << "This is unacceptable! ";
    std::cout << "I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    
    for (i = 0; i < 4; i++)
    {
        if(levels[i] == level)
        {
            break ;
        }
    }
    switch(i)
    {
        case 0: {
            debug();
            break;
        }
        case 1: {
            info();
            break;
        }
        case 2: {
            warning();
            break;
        }
        case 3: {
            error();
            break;
        }
        default:
        {
            std::cout << "\033[1;43m[ Probably complaining about insignificant problems ]" << std::endl;
            break;
        }
    }
}