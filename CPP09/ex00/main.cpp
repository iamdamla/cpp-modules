/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:21:23 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/03/01 09:52:02 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cerr << "Error: Wrong number of arguments" << std::endl;
        return 0;
    }
    std::map<std::string, double> data;

    readData(data);
    fillData(argv[1], data);
    
    return 0;
}