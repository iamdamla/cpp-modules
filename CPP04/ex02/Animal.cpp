/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:20:33 by derblang          #+#    #+#             */
/*   Updated: 2023/11/07 11:46:57 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : _type("default type")
{
    std::cout << "\033[33mnew ANIMAL " << this->_type << " is born.\033[0m" << std::endl;
}
Animal::Animal(std::string type) : _type(type)
{
    std::cout << "\033[33mnew ANIMAL " << this->_type << " is born.\033[0m" << std::endl;
}
Animal::Animal(const Animal &other)
{
    *this= other;
    std::cout << "\033[33mnew copy ANIMAL " << this->_type << " is born.\033[0m" << std::endl;
}
Animal::~Animal(void)
{
    std::cout << "\033[33mSadly," << this->_type << " is dead\033[0m" << std::endl; 
}
Animal& Animal::operator=(const Animal &other)
{   
    if (this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void Animal::makeSound(void) const
{
    std::cout << "Some animal noise" << std::endl;
}
