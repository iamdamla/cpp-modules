/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:55:47 by derblang          #+#    #+#             */
/*   Updated: 2023/11/06 10:55:49 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

 ScavTrap::ScavTrap(void): ClapTrap()
 {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "Default ScavTrap named " << this->_name  << " has created by ClapTrap!" << std::endl;
 }
  ScavTrap::ScavTrap(std::string name)
  {
     this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    this->_name = name;
    std::cout << "Default ScavTrap named " << this->_name  << " has created by ClapTrap!" << std::endl;
  }
ScavTrap::ScavTrap(const ScavTrap &other)
{
   
    std::cout << "Default ScavTrap named " << this->_name  << " has created by ClapTrap!" << std::endl;
    *this = other;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_attackDamage = other._attackDamage;
    this->_energyPoints = other._energyPoints;
    return (*this);
}

 ScavTrap::~ScavTrap(void)
{
    std::cout << "Deconstructor called for --->"  << getName() << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "\033[1;35mFor the ScavTrap named" << this->_name << " active Gate Keeper mode on!\033[1;35m" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->_energyPoints && this->_hitPoints)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target;
        std::cout << " and causing " << this->_attackDamage << " points of damage " <<  std::endl;
        this->_energyPoints--;
    }
    else
    {
        std::cout << "ScavTrap " << this->_name << " was not be able to attack to ";
        std::cout << target << " because he doesnt have any energy left!" << std::endl;
    }
}

      
