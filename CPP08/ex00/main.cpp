/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:35:58 by derblang          #+#    #+#             */
/*   Updated: 2024/02/26 11:04:35 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( )
{
    std::vector<int> values;
    values.push_back(5);
    values.push_back(42);
    values.push_back(87);
    values.push_back(2);
    easyfind(values, 42);
  
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);
    lst.push_back(5);
    easyfind(lst, 8);

    return (0);
}