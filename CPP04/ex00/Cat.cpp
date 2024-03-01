/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 09:53:18 by derblang          #+#    #+#             */
/*   Updated: 2023/11/08 10:46:36 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    this->_type = "cat";
    std::cout << "new CAT is born." << std::endl;
}
Cat::Cat(const Cat &other)
{
    *this = other;
    std::cout << "new CAT is born." << std::endl;
}
Cat::~Cat(void)
{
    std::cout << "Unfortunately, the CAT has died" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    if(this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);
    std::cout << "new copy assignment CAT is born." << std::endl;
}


void Cat::makeSound(void) const
{
    std::cout << "Meow meow!" << std::endl;
}