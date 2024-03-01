/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:50:19 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/02/23 09:38:54 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void display(T element)
{
    std::cout << element << std::endl;
}

template<typename T, typename T2>
void iter(T *arr, size_t size, T2 function)
{
    for(size_t i = 0; i < size; i++)
        function(arr[i]);

}

#endif