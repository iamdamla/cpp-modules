/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:45:45 by derblang          #+#    #+#             */
/*   Updated: 2023/10/18 10:52:27 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook(void)
{
  
    return;
}

PhoneBook::~PhoneBook(void)
{
    return;
}

void PhoneBook::startPage(void)
{
    std::cout << "\n" << "   PHONEBOOK: YOU CAN ONLY USE 3 COMMANDS: \n" << std::endl;
    std::cout << "1- ADD: You can save a new contact" << std::endl;
    std::cout << "2- SEARCH: You can display the specific contact" << std::endl;
    std::cout << "3- EXIT: You can exit from the Phone Book" << std::endl;
}

Contact PhoneBook::createContact()
{
    Contact contact;
    std::string str("");
    while(str == "")
    {
        if(std::cin.eof())
            exit(0);
        std::cout << "Enter your first name: ";
        std::getline(std::cin, str);
        if(str.find('\t') != std::string::npos)
         {
            std::cout << "You can't use tab to fill infos!" << std::endl;
            str = "";
         }   
        contact.setFirstName(str);
    }
    str = "";
    while(str == "")
    {
        if(std::cin.eof())
            exit(0);
        std::cout << "Enter your last name: ";
        std::getline(std::cin, str);
         if(str.find('\t') != std::string::npos)
         {
            std::cout << "You can't use tab to fill infos!" << std::endl;
            str = "";
         }  
        contact.setLastName(str);
    }
     str = "";
    while(str == "")
    {
        if(std::cin.eof())
            exit(0);
        std::cout << "Enter your nick name: ";
        std::getline(std::cin, str);
         if(str.find('\t') != std::string::npos)
         {
            std::cout << "You can't use tab to fill infos!" << std::endl;
            str = "";
         }  
        contact.setNickName(str);
    }
     str = "";
    while(str == "")
    {
        if(std::cin.eof())
            exit(0);
        std::cout << "Enter your phone number: ";
        std::getline(std::cin, str);
         if(str.find('\t') != std::string::npos)
         {
            std::cout << "You can't use tab to fill infos!" << std::endl;
            str = "";
         }  
        contact.setPhoneNumber(str);
    }
     str = "";
    while(str == "")
    {
        if(std::cin.eof())
            exit(0);
        std::cout << "Enter your darkest secret: ";
        std::getline(std::cin, str);
         if(str.find('\t') != std::string::npos)
         {
            std::cout << "You can't use the tab for filling infos!" << std::endl;
            str = "";
         }  
        contact.setDarkestSecret(str);
    }
    return (contact);
}

void PhoneBook::addContact()
{
    static int i;

    if(i == 8)
        i = 0;
   this->users[i] = this->createContact();
   i++;
}

void PhoneBook::displayContact(int index)
{
    std::cout << "|" << std::setw(10)  << index + 1 << "|";
    std::cout << std::setw(10)  << this->users[index].getContact("first name") << "|";
    std::cout << std::setw(10)  << this->users[index].getContact("last name") << "|";
    std::cout << std::setw(10)  << this->users[index].getContact("nickname") << "|";
}
void PhoneBook::searchContact()
{
    Contact contact;
    PhoneBook pb;
    int i = 0;
    

    std::string temp;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "| index    |" << "first name|" << "last name |" << " nickname |" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    if(this->users[i].getContact("first name") == "")
    {    
        std::cout << "You don't have any contact in your PhoneBook!" << std::endl;
        return ;
    }
    while(i != 8)
    {
        if(this->users[i].getContact("first name") == "")
            break;
        this->displayContact(i);
        std::cout << std::endl;
        i++;
    }
   
   std::cout << "---------------------------------------------" << std::endl;
   while(1)
   {
        std::cout << "Please type a valid contact :" << std::endl;
        if(!std::getline(std::cin, temp))
            break;
        if(temp == "1" && this->users[0].getContact("first name").length() != 0)
        {
            this->users[0].printContact();
            return;
        }
        else if(temp == "2" && this->users[1].getContact("first name").length() != 0)
        {
            this->users[1].printContact();
            return;
        }
          else if(temp == "3" && this->users[2].getContact("first name").length() != 0)
        {
            this->users[2].printContact();
            return;
        }
          else if(temp == "4" && this->users[3].getContact("first name").length() != 0)
        {
            this->users[3].printContact();
            return;
        }
          else if(temp == "5" && this->users[4].getContact("first name").length() != 0)
        {
            this->users[4].printContact();
            return;
        }
          else if(temp == "6" && this->users[5].getContact("first name").length() != 0)
        {
            this->users[5].printContact();
            return;
        }
          else if(temp == "7" && this->users[6].getContact("first name").length() != 0)
        {
            this->users[6].printContact();
            return;
        }
          else if(temp == "8" && this->users[7].getContact("first name").length() != 0)
        {
            this->users[7].printContact();
            return;
        }
        else
            std::cout << "Not a valid number, try again!" << std::endl;
   }
}


