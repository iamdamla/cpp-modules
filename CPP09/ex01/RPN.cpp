/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: derblang <derblang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:58:35 by derblang          #+#    #+#             */
/*   Updated: 2024/03/01 09:36:31 by derblang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(const RPN &other)
{
    this->_stack = other._stack;
}
RPN& RPN::operator=(const RPN &other)
{
    if(this != &other)
    {
        this->_stack = other._stack;
    }
    return (*this);
}
RPN::~RPN(){}

bool RPN::isNumber(std::string str)
{
    std::string::iterator it = str.begin();
    std::string::iterator ite = str.end();
    while(it != ite)
    {
        if(!isdigit(*it))
            return false;
        ++it;
    }
    return true;
}

bool RPN::isOp(std::string str)
{
    if(str == "+" || str == "-" || str == "*" || str == "/")
        return true;
    return false;
}
void RPN::checkInput(const std::string input)
{
    std::istringstream iss(input);
    std::string token;
    int opCount = 0;
    int nbCount = 0;

    while(std::getline(iss, token, ' '))
    {
        if(isOp(token))
            opCount++;
        else if(atoi(token.c_str()) >= 0 && atoi(token.c_str()) < 10)
            nbCount++;
        else
            throw errMsg("Error: Not a valid input");
    }
    if(nbCount != opCount + 1 || opCount <= 0)
        throw errMsg("Error: Not a valid input");
}

void RPN::calculate(char **argv)
{
    
    std::string str = argv[1];
    std::istringstream iss(str);
    std::string token;
    int res = 0;
    
    while(iss >> token)
    {
        if(isNumber(token))
            _stack.push(atoi(token.c_str()));
        else if(isOp(token) && _stack.size() > 1)
        {
            int i = _stack.top();
            _stack.pop();
            int j = _stack.top();
            _stack.pop();
            switch(token[0])
            {
                    case '+' :
                    {
                        res = (j + i);
                        _stack.push(res);
                        break;
                    }
                    case '-' :
                    {
                        res = (j - i);
                        _stack.push(res);
                        break;
                    }
                    case '*' :
                    {
                            res = (j * i);
                        _stack.push(res);
                        break;
                    }
                    case '/' :
                    {
                        if(i == 0)
                            throw errMsg("Error: You can't divide any number to 0");
                        else
                        {
                            res = (j / i);
                            _stack.push(res);
                            break;
                        }
                    }
                }
            }
            else
                throw errMsg("Error: Invalid input");
    }
        
        std::cout << "result: " << res << std::endl;

}

