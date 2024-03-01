/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:02:29 by derblang          #+#    #+#             */
/*   Updated: 2023/11/07 11:34:37 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    this->_type = "dog";
    std::cout << "A new PUPPY is born" << std::endl;
}
Dog::Dog(const Dog &other)
{
    *this = other;
     std::cout << "A new PUPPY is born" << std::endl;
}
Dog& Dog::operator=(const Dog &other)
{
    if(this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);
     std::cout << "A new PUPPY is born" << std::endl;
}
Dog::~Dog(void)
{
     std::cout << "Unfortunately, the PUPPY has died " << std::endl;
} 
void Dog::makeSound(void) const
{
    std::cout << "Woof woof" <<std::endl;
}