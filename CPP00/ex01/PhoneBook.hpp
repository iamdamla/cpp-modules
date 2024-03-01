/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:44:39 by derblang          #+#    #+#             */
/*   Updated: 2023/10/18 10:26:06 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>  
#include "Contact.hpp"



class PhoneBook {
    private:
       Contact users[8];
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void startPage(void);
      Contact createContact(void);
      void searchContact(void);
      void addContact(void);
      void convertColumn(void);
      void displayContact(int i);
    
};

#endif