/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:31:48 by derblang          #+#    #+#             */
/*   Updated: 2023/10/30 11:26:48 by derblang         ###   ########.fr       */
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
        Fixed &operator = (Fixed const &other);
        ~Fixed( void );
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
 };
 
std::ostream& operator << (std::ostream& str, const Fixed& num);

#endif