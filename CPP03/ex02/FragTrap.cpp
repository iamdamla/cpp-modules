/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:55:22 by derblang          #+#    #+#             */
/*   Updated: 2023/11/06 10:55:24 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

 FragTrap::FragTrap(void) : ClapTrap()
 {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FRAGTRAP default constructor called for " << this->_name << std::endl;
 }
FragTrap::FragTrap(std::string name)
{
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    this->_name = name;
    std::cout << "FRAGTRAP default constructor called for " << this->_name << std::endl;
}
FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FRAGTRAP default constructor called for " << this->_name << std::endl;
    *this = other;
}
FragTrap& FragTrap::operator=(const FragTrap &other)
{
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_attackDamage = other._attackDamage;
    this->_energyPoints = other._energyPoints;
    return (*this);
}
FragTrap::~FragTrap(void)
{
    std::cout << "FRAGTRAP deconstructor called for --->"  << getName() << std::endl;

}

void FragTrap::highFivesGuys(void)
{
    std::cout << "\033[31mGive me a high five!\033[31m" << std::endl;
}

