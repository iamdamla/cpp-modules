/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 14:47:07 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/02/23 09:44:34 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <vector>

template<typename T>

class Array
{
    private:
        T* _array;
        unsigned int _size;
    public:
        Array( void ) :  _array(new T[0]), _size(0)
        {}
        ~Array( void )
        {
                delete [] this->_array;
        }
        Array( unsigned int n ) : _array(new T[n]), _size(n)
        {}
        Array( const Array &other) :   _size(other._size)
        {
            _array = new T [this->_size];
            for(unsigned int i = 0; i < _size; i++)
                this->_array[i] = other._array[i];
        }
        Array& operator=( const Array& other)
        {
            if(this != &other)
            {
                this->_size = other._size;
                if(this->_array)
                    delete [] this->_array;
                this->_array = new T[_size];
                for(unsigned int i = 0; i < _size; i++)
                    this->_array[i] = other._array[i];
            }
            return (*this);
        };
        int size( void ) const
        {
            return (this->_size);
        }
        T& operator[]( unsigned int i ) const
        {
            if(i >= this->_size || this->_array == NULL)
                throw std::out_of_range("Index out of range");
            return (this->_array[i]);
        }
        
};



#endif