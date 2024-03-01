/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:43:24 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/02/14 12:55:27 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    *this = other;
}
ScalarConverter& ScalarConverter::operator=(ScalarConverter const &other)
{
    if(this == &other)
        return (*this);
    return (*this);
}

bool ScalarConverter::isChar(const std::string &str)
{
    if(str.length() == 1 && !std::isdigit(str[0]) && 32 < str[0] && str[0] < 126)
        return true;
     else
        return false;
}

bool ScalarConverter::isInt(const std::string &str)
{
    if(str.length() == 0)
        return false;
    if(str.length() > 11)
        return false;
    size_t i;
    for(i = 0; i < str.length(); i++)
    {
        if(i == 0 && (str[i] == '-' || str[i] == '+'))
            i++;
        else if(!isdigit(str[i]))
            return false;
    }
    return true;
}

bool ScalarConverter::isFloat(const std::string &str)
{
    int point = 0;
    
    size_t i;
    for (i = 0; i < str.length(); i++)
    {
        if(i == 0 && (str[i] == '-' || str[i] == '+'))
            i++;
        if(str[i] == '.')
            point++;
        if(str[i] != '.' && !std::isdigit(str[i]) && str[i] != 'f')
            return false;
        else if(i == str.length() - 1 && (str[i] != 'f'))
            return false;
    }
    if(point != 1)
            return false;
    return true;
}

bool ScalarConverter::isDouble(const std::string &str)
{
    int point = 0;
    size_t i;
    for(i = 0; i < str.length(); i++)
    {
        if(i == 0 && (str[i] == '-' || str[i] == '+'))
            i++;
        if(str[i] == '.')
            point++;
        if(str[i] != '.' && !std::isdigit(str[i]))
            return false;
    }
    if(point != 1)
            return false;
    return true;
}

void ScalarConverter::convertInt(const std::string &str)
{
    int c = atoi(str.c_str());
    if(0 <= c && c <= 127 && isprint(c))
        std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
    else if(0 <= c && c <= 127 && !isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << c << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) <<static_cast<double>(c) << std::endl;
}

void ScalarConverter::convertChar(const std::string &str)
{
    std::istringstream iss(str);
    char c;
    iss >> c;
    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) <<static_cast<double>(c) << std::endl;

}

void ScalarConverter::convertFloat(const std::string &str)
{
    float f = atof(str.c_str());
    if (f >= 0 && f <= 127 && isprint(f))
            std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
    else if(f >= 0 && f <= 127 && !isprint(f) && f - static_cast<int>(f) == 0)
            std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(f) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(f) << "f" << std::endl; 
    std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void ScalarConverter::convertDouble(const std::string &str)
{
    double d = atof(str.c_str());
    if(d >= 0 && d <= 127 && isprint(d))
        std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
    else if(0 <= d && d <= 127 && !isprint(d))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(d) << std::endl;
 
}

void ScalarConverter::convert(const std::string &str)
{
    if(isInt(str))
        convertInt(str);
    else if(isChar(str))
        convertChar(str);
    else if(isFloat(str))
        convertFloat(str);
    else if(isDouble(str))
        convertDouble(str);
    else if(str == "nan" || str == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if(str == "-inff" || str == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf"<< std::endl;
    }
    else if(str == "inff" || str == "inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: inff" << std::endl;
        std::cout << "double: inf"<< std::endl;
    }
    else
        std::cout << "Conversion impossible" << std::endl;
}