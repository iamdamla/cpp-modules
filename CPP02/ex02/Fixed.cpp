/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:31:06 by derblang          #+#    #+#             */
/*   Updated: 2023/10/30 14:59:20 by derblang         ###   ########.fr       */
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


//Arithmatic

Fixed Fixed::operator+(Fixed const &other) const
{
    return (this->toFloat() + other.toFloat());
}
Fixed Fixed::operator-(Fixed const &other) const
{
    return (this->toFloat() - other.toFloat());
}
Fixed Fixed::operator*(Fixed const &other) const
{
    return (this->toFloat() * other.toFloat());
}
Fixed Fixed::operator/(Fixed const &other) const
{
    return (this->toFloat() / other.toFloat());
}


//Comparasion
Fixed& Fixed::operator = (Fixed const& other)
{
    std::cout << "Copy assignmet operator called"  << std::endl;
    this->_value = other.getRawBits();
    return (*this);
}  
bool Fixed::operator>(Fixed const &other) const
{
    if(this->_value > other.getRawBits())
        return true;
    return false;
}
bool Fixed::operator<(Fixed const &other) const
{
    if(this->_value < other.getRawBits())
        return true;
    return false;
}
bool Fixed::operator>=(Fixed const &other) const
{
    if(this->_value >= other.getRawBits())
        return true;
    return false;
}
bool Fixed::operator<=(Fixed const &other) const
{
    if(this->_value <= other.getRawBits())
        return true;
    return false;
}
bool Fixed::operator==(Fixed const &other) const
{
    if(this->_value == other.getRawBits())
        return true;
    return false;
}
bool Fixed::operator!=(Fixed const &other) const
{
    if(this->_value != other.getRawBits())
        return true;
    return false;
}
// The pre-increment operator increments the fixed-point value by the appropriate 
// fraction based on your fixed-point representation. Since you have 8 fractional bits, 
// incrementing by 1 corresponds to adding 1/256 to the value (0.00390625).
// This is the expected behavior of the pre-increment operator in your Fixed class.

  //pre-increment
Fixed& Fixed::operator++()
{
    this->_value++;
    return (*this);
}
Fixed& Fixed::operator--()
{
    this->_value++;
    return (*this);
}

//post-increment
Fixed Fixed::operator++(int)
{
    Fixed copy(*this);
    copy._value = this->_value++;
    return (copy);
}
Fixed Fixed::operator--(int)
{
    
    Fixed copy(*this);
    copy._value = this->_value--;
    return (copy);
}


// Satic member functions
Fixed& Fixed::min(Fixed &num1, Fixed &num2)
{
    if(num1.toFloat() < num2.toFloat())
        return num1;
    else
        return num2;
}


const Fixed& Fixed::min(const Fixed &num1, const Fixed &num2)
{
    if(num1.toFloat() <=num2.toFloat())
        return num1;
    else
        return num2;
}

Fixed& Fixed::max(Fixed &num1, Fixed &num2)
{
    if(num1.toFloat() > num2.toFloat())
        return num1;
    else
        return num2;
}
 const Fixed& Fixed::max(const Fixed &num1, const Fixed &num2)
{
    if(num1.toFloat() > num2.toFloat())
        return num1;
    else
        return num2;
}





