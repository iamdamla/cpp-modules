/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:02:29 by derblang          #+#    #+#             */
/*   Updated: 2023/11/07 14:50:05 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    this->_type = "dog";
    this->_brain = new Brain();
    std::cout << "\e[0;31mA new PUPPY is born\033[0m" << std::endl;
}
Dog::Dog(const Dog &other)
{
    this->_type = other._type;
    //delete this->_brain;
    this->_brain = new Brain(other.getBrain());
     std::cout << "\e[0;31mA new clone PUPPY is born\033[0m" << std::endl;
}
Dog& Dog::operator=(const Dog &other)
{
    if(this == &other)
        return (*this);
    this->_type = other._type;
    delete this->_brain;
    this->_brain = new Brain(other.getBrain());
    return (*this);
}
Dog::~Dog(void)
{
    delete this->_brain;
    this->_brain = NULL;
     std::cout << "\e[0;31mUnfortunately, the PUPPY has died\033[0m " << std::endl;
} 
void Dog::makeSound(void) const
{
    std::cout << "Woof woof" <<std::endl;
}


void Dog::setBrain(Brain const &brain)
{
    *(this->_brain) = brain; 
   
}
Brain& Dog::getBrain(void) const
{
    return (*(this->_brain));   
}
