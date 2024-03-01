/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:43:28 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/02/14 12:55:14 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>
#include <iomanip>
#include <stdlib.h>


class ScalarConverter
{
    public:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(ScalarConverter const &other);
        
        static bool isChar(const std::string &str);
        static bool isInt(const std::string &str);
        static bool isFloat(const std::string &str);
        static bool isDouble(const std::string &str);
        static void convertInt(const std::string &str);
        static void convertChar(const std::string &str);
        static void convertFloat(const std::string &str);
        static void convertDouble(const std::string &str);
        static void convert(const std::string& str);

};

#endif