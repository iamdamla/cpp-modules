/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:53:18 by derblang          #+#    #+#             */
/*   Updated: 2023/11/08 11:15:45 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    this->_type = "cat";
    this->_brain = new Brain();
    std::cout << "\e[0;32mnew CAT is born.\033[0m" << std::endl;
}
Cat::Cat(const Cat &other)
{
    this->_type = other._type;
    this->_brain = new Brain(other.getBrain());
    std::cout << "\e[0;32mnew clone CAT is born.\033[0m" << std::endl;
}
Cat::~Cat(void)
{
    delete this->_brain;
    std::cout << "\e[0;32mUnfortunately, the CAT has died\033[0m" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    if(this == &other)
        return (*this);
    this->_type = other._type;
    delete this->_brain;
    this->_brain = new Brain(other.getBrain());
    return (*this);
}


void Cat::makeSound(void) const
{
    std::cout << "Meow meow!" << std::endl;
}

void Cat::setBrain(Brain const& brain)
{
    *(this->_brain) = brain;
    
}
Brain& Cat::getBrain(void) const
{
    return (*(this->_brain));
}

