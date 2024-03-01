/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:22:54 by derblang          #+#    #+#             */
/*   Updated: 2024/02/20 11:43:24 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>

template<typename T>

int easyfind(T container, int i)
{
    typename T::iterator it = std::find(container.begin(), container.end(), i);

    if(it != container.end())
        std::cout << "value find: " << i << std::endl;
    else
        std::cout << "value not find: " << i << std::endl;
    return 0;
}



#endif