/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:12:07 by derblang          #+#    #+#             */
/*   Updated: 2023/11/08 10:54:24 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("wrong type")
{
    std::cout << "new " << this->_type << " is born." << std::endl;
}
WrongAnimal::WrongAnimal(std::string type): _type(type)
{
    std::cout << "new " << this->_type << " is born." << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
    std::cout << "new " << this->_type << " is born." << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    if(this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);
}
WrongAnimal::~WrongAnimal(void)
{
    std::cout << "Sad that the " << this->_type << " is dead." << std::endl;
}

void WrongAnimal::makeSound(void) const
{   
    std::cout << "Some wrong animal noise" << std::endl;
}
std::string WrongAnimal::getType(void) const
{
    return (this->_type);
}
        