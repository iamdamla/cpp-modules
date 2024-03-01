/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:27:00 by derblang          #+#    #+#             */
/*   Updated: 2023/11/07 11:58:59 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

 WrongCat::WrongCat(void) : WrongAnimal()
 {
    this->_type = "wrongCat";
    std::cout << "New wrong kitten is born!" << std::endl;
 }
WrongCat::WrongCat(const WrongCat &other)
{
    *this = other;
    std::cout << "New wrong kitten is born!" << std::endl;
}
WrongCat::~WrongCat(void)
{
    std::cout << "The wrong kitten has died " << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat &other)
{
    if(this == &other)
        return (*this);
    this->_type = other._type;
    return (*this);
}
void WrongCat::makeSound(void) const
{
    std::cout << "wrong Meow wrong meow wrong meow!" << std::endl;
}