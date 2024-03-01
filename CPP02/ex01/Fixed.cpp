/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:35:28 by derblang          #+#    #+#             */
/*   Updated: 2023/10/30 11:26:33 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed( void ) : _value(0)
{
    std::cout << "Default constructor called" << std::endl; 
}

 Fixed::Fixed( const int nb): _value(nb << _bits)
 {
    std::cout << "Int constructor called"<< std::endl;
 }
Fixed::Fixed( const float nb): _value(roundf(nb * (1 << _bits)))
{
    
    std::cout << "Float constructor called" << std::endl;
}
Fixed::Fixed(Fixed const& other) : _value(other._value)
{
   
    std::cout << "Copy constructor called" << std::endl;
}


Fixed& Fixed::operator = (Fixed const& other)
{
    std::cout << "Copy assignmet operator called"  << std::endl;
    this->_value = other.getRawBits();
    return (*this);
}  

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "SetRawBits member function called" << std::endl;
    this->_value = raw;
}

float Fixed::toFloat( void) const
{
    return (static_cast<float>(_value) / (1 << _bits));
}

int Fixed::toInt( void) const
{
    return (_value >> _bits);    
}

std::ostream& operator << (std::ostream& str, const Fixed& num)
{
    return (str << num.toFloat());
}