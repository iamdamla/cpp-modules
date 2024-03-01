/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 11:37:14 by derblang          #+#    #+#             */
/*   Updated: 2024/03/01 09:36:23 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>

class RPN
{
    private:
        std::stack<int> _stack;
    public:
        RPN();
        ~RPN();
        RPN(const RPN &other);
        RPN& operator=(const RPN &other);
        void calculate(char **argv);
        void checkInput(const std::string input);
        bool isOp(std::string str);
        bool isNumber(std::string str);

       
};
 class errMsg : public std::exception
        {
            const char *_msg;
            public:
                errMsg(const char *msg) : _msg(msg){}
            virtual const char* what() const throw() {
                return (_msg);
            }
        };

#endif