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
    std::cout << "new ANIMAL " << this->_type << " is born." << std::endl;
}
Animal::Animal(std::string type) : _type(type)
{
    std::cout << "new ANIMAL " << this->_type << " is born." << std::endl;
}
Animal::Animal(const Animal &other)
{
    *this= other;
    std::cout << "new copy ANIMAL " << this->_type << " is born." << std::endl;
}
Animal::~Animal(void)
{
    std::cout << "Sadly," << this->_type << " is dead" << std::endl; 
}
Animal& Animal::operator=(const Animal &other)
{   
    if (this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);
    std::cout << "new copy assignment ANIMAL " << this->_type << " is born." << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

void Animal::makeSound(void) const
{
    std::cout << "Some animal noise" << std::endl;
}
