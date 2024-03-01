/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 12:26:15 by derblang          #+#    #+#             */
/*   Updated: 2024/02/20 14:48:18 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>



class Span
{
    private:
        unsigned int _n;
        std::vector<int> _arr;
        
    public:
        Span( void );
        Span( unsigned int n);
        Span( const Span &other);
        Span &operator=(const Span &other);
        ~Span( void );

        void addNumber(unsigned int addNbr);
        unsigned int shortestSpan(void) const;
        unsigned int longestSpan(void) const;
        void print( void );
        
};


#endif