/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:40:42 by derblang          #+#    #+#             */
/*   Updated: 2023/10/11 13:37:10 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


#include <iostream>
#include <string>

class Contact
{
    private:
        std::string name;
        std::string lastName;
        std::string nickName;
        std::string phone;
        std::string secret;
        //int index;
        
    public:
        Contact();
        ~Contact();
        void printContact(void);
        std::string getFirstName(void);
        void setFirstName(const std::string& name);
        std::string getLastName(void);
        void setLastName(const std::string& lastName);
        std::string getNickName(void);
        void setNickName(const std::string& nickName);
        std::string getPhoneNumber(void);
        void setPhoneNumber(const std::string& phone);
        std::string getDarkestSecret(void);
        void setDarkestSecret(const std::string& secret);
        std::string cut(std::string str);
        std::string getContact(std::string str);
};


#endif