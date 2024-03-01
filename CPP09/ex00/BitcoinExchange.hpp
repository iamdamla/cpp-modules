/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:06:03 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/03/01 09:18:19 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <exception>
#include <cstdlib>
#include <algorithm>


    
void readData(std::map<std::string, double> &data);
void printData(std::map<std::string, double> &data);
bool isValidDate(std::string &date);
bool isValidValue(std::string &value);
bool isValidLine(std::string line);
void fillData(const char *filename, std::map<std::string, double> &map);
    
class cantLoadData : public std::exception{
    public:
        const char* what() const throw(){
            return ("Cant load the data from the file: ");
        }
};
class invalidDate : public std::exception {
    public:
        const char* what() const throw(){
            return ("Error: date format is invalid => ");
        }
};
class invalidValue : public std::exception {
    public:
        const char* what() const throw(){
            return ("Value is invalid: ");
        }   
};
class badInput : public std::exception {
    public:
        const char* what() const throw(){
            return ("Error: bad input => ");
        }
};



#endif