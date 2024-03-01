/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:29:33 by derblang          #+#    #+#             */
/*   Updated: 2023/10/30 14:40:53 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int _value;
        static const int _bits;
        
    public:
        Fixed( void );
        Fixed( Fixed const& other );
        Fixed( const int);
        Fixed( const float);
        ~Fixed( void );
 
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;

        //Comparasion
        Fixed& operator=(Fixed const &other);
        bool operator>(Fixed const &other) const;
        bool operator<(Fixed const &other) const;
        bool operator>=(Fixed const &other) const;
        bool operator<=(Fixed const &other) const;
        bool operator==(Fixed const &other) const;
        bool operator!=(Fixed const &other) const;
        

        //Arithmetic
        Fixed operator+(Fixed const &other) const;
        Fixed operator-(Fixed const &other) const;
        Fixed operator*(Fixed const &other) const;
        Fixed operator/(Fixed const &other) const;

        //pre-increment
        Fixed &operator++();
        Fixed &operator--();

        //post-increment
        Fixed operator++(int);
        Fixed operator--(int);

        //Static member functions
        static Fixed &min(Fixed &num1, Fixed &num2);
        static const Fixed &min(const Fixed &num1, const Fixed &num2);

        static Fixed &max(Fixed &num1, Fixed &num2);
        static const Fixed &max(const Fixed &num1, const Fixed &num2);
        
 };

 std::ostream& operator << (std::ostream& str, const Fixed& num);

#endif
