/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:21:35 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/03/01 09:28:11 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void readData(std::map<std::string, double> &data)
{
    std::string line;
    std::string key;
    std::string value;
    std::ifstream db("data.csv");
    if(!db.is_open())
        throw cantLoadData();
    while(std::getline(db, line))
    {
        key = line.substr(0, line.find(','));
        value = line.substr(line.find(',') + 1, line.find('\n'));
        data.insert(std::pair<std::string, double>(key, atof(value.c_str())));
    }
    
}

void printData(std::map<std::string, double> &data)
{
    std::map<std::string, double>::iterator it;
    for(it = data.begin(); it != data.end(); ++it)
    {
        std::cout << it->first << " | " << it->second << '\n';
    }

}

void convertData(std::map<std::string, double> &map, std::string &date, std::string &value)
{
    std::map<std::string, double>::iterator it;

    for(it = map.begin(); it != map.end(); ++it)
    {
        if(it->first == date)
        {
            std::cout << date << " => " << std::atof(value.c_str()) << " = " << std::atof(value.c_str()) * it->second << std::endl;
            break;
        }
        else
        {
            it = map.upper_bound(date);
            it--;
            std::cout << date << " => " << std::atof(value.c_str()) << " = " << std::atof(value.c_str()) * it->second << std::endl;
            break;
        }
    }
}

void fillData(const char *filename, std::map<std::string, double> &map)
{
    std::string date;
    std::string value;
    std::string line;
    std::ifstream file(filename);

    if(!file.is_open())
    {
        throw cantLoadData();
    }
    std::getline(file, line);
    while(std::getline(file, line))
    {
        try
        {
            if(line.find('|') == line.npos)
                throw badInput();
            date = line.substr(0, line.find('|'));
            value = (line.substr(line.find('|') + 1, line.find('\n')));
            if(isValidDate(date) == false || isValidLine(line) == false)
            {
                std::cout << "Error: bad input => " << date << std::endl;
                continue;
            }    
            if(isValidValue(value) == false)
                continue;
            date.erase(remove(date.begin(), date.end(), ' '), date.end());
            value.erase(remove(value.begin(), value.end(), ' '), value.end());
            convertData(map, date, value);
        }
        catch(badInput &e)
        {
            std::cerr << e.what() << line << std::endl;
        }
    }
}

bool isValidDate(std::string &date)
{
    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);
    int yearInt = atoi(year.c_str());
    int monthInt = atoi(month.c_str());
    int dayInt = atoi(day.c_str());
    
    if(yearInt < 2009 || yearInt > 2023)
        return false;
    if(monthInt < 1 || monthInt > 12)
        return false;
    if(dayInt < 1 || dayInt > 31)
        return false;
    if((monthInt == 4 || monthInt == 6 || monthInt == 9 || monthInt == 11) && dayInt > 30)
        return false;
    if(monthInt == 2 && dayInt > 28)
        return false;
    else
        return true;
}


bool isValidValue(std::string &value)
{
    if(std::atof(value.c_str()) < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }  
    if(std::atof(value.c_str()) > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    else
        return true;
}

bool isValidLine(std::string line)
{
    if(line.length() < 14)
        return false;
    if(line[10] != ' ' || line[11] != '|' || line[12] != ' ')
        return false;
    else
        return true;
}