/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:43:17 by derblang          #+#    #+#             */
/*   Updated: 2023/10/10 14:54:24 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PhoneBook.hpp"


Contact::Contact(): name(""), lastName(""), nickName(""), phone(""), secret("")
{
    return;
}

Contact::~Contact()
{
   
    return;
}

void Contact::setFirstName(const std::string& name)
{
    this->name = name;
}
std::string Contact::getFirstName(void)
{
    return this->name;
}

void Contact::setLastName(const std::string& lastName)
{
    this->lastName = lastName;
}
std::string Contact::getLastName(void)
{
    return this->lastName;
}
void Contact::setNickName(const std::string& nickName)
{
    this->nickName = nickName;
}
std::string Contact::getNickName(void)
{
    return this->nickName;
}

void Contact::setPhoneNumber(const std::string& phone)
{
    this->phone = phone;
}
std::string Contact::getPhoneNumber(void)
{
    return this->phone;
}
void Contact::setDarkestSecret(const std::string& secret)
{
    this->secret = secret;
}
std::string Contact::getDarkestSecret(void)
{
    return this->secret;
}


void Contact::printContact(void)
{
    std::cout << "First   Name: " + this->name << std::endl;
    std::cout << "Last    Name: " + this->lastName << std::endl;
    std::cout << "Nick    Name: " + this->nickName << std::endl;
    std::cout << "Phone   Number: " + this->phone << std::endl;
    std::cout << "Darkest Secret: " + this->secret << std::endl;
}

std::string Contact::cut(std::string str)
{
    std::string temp;
    temp = str.substr(0, 9);
    temp += ".";
    return temp;
}
    

std::string Contact::getContact(std::string str)
{
    if(str == "first name")
    {
        if(this->name.length() > 10)
            return (this->cut(this->name));
        else
            return (this->name);
    }
    else if(str == "last name")
    {
        if(this->lastName.length() > 10)
            return (this->cut(this->lastName));
        else
            return (this->lastName);
    }
    else if(str == "nickname")
    {
        if(this->nickName.length() > 10)
            return (this->cut(this->nickName));
        else
            return (this->nickName);
    }
    return("");
}
