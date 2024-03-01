/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:31:48 by derblang          #+#    #+#             */
/*   Updated: 2023/10/25 14:28:12 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int _value;
        static const int _bits;
        
    public:
        Fixed( void );
        Fixed( Fixed const& other );
        Fixed &operator = (Fixed const &other);
        ~Fixed( void );
        int getRawBits(void) const;
        void setRawBits(int const raw);
};


#endif