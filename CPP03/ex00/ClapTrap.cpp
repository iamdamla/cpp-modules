/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:54:01 by derblang          #+#    #+#             */
/*   Updated: 2023/11/06 10:54:03 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name("default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " has been constructed!" << std::endl;
}
ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << this->_name << " has been constructed!" << std::endl;

}

 ClapTrap::ClapTrap( ClapTrap const& other): _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
 {
    std::cout << "Copy CLapTrap constructor" << this->_name <<  " called" << std::endl;
 }

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = other._name;
    this->_hitPoints = other._hitPoints;
    this->_energyPoints = other._energyPoints;
    this->_attackDamage = other._attackDamage;
    return (*this);
}
ClapTrap::~ClapTrap( void )
{
    std::cout << "ClapTrap " << this->_name << " has been destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->_energyPoints && this->_hitPoints)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target;
        std::cout << " and causing " << this->_attackDamage << " points of damage " <<  std::endl;
        this->_energyPoints--;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " was not able to attack to ";
        std::cout << target << " because he doesnt have any energy left!" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " has been attacked and has received ";
    std::cout << amount << " points of damage." << std::endl;
    this->_hitPoints -= amount;
    if (this->_hitPoints < 0)
        this->_hitPoints = 0;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_energyPoints && this->_hitPoints)
    {
        std::cout << "ClapTrap " << this->_name << " has been repaired with ";
        std::cout << amount << " hit points." << std::endl;
        this->_energyPoints--;
        this->_hitPoints += amount;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " couldnt be repaired becaufe of energy absence" << std::endl;
    }
}

std::string ClapTrap::getName(void) const
{
    return (this->_name);
}
int ClapTrap::getHitPoints(void)
{
    return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(void)
{
    return (this->_energyPoints);
}

int ClapTrap::getAttackDamage(void)
{
    return (this->_attackDamage);
}