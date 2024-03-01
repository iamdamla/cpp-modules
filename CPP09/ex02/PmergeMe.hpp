/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damlaerblang <damlaerblang@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:55:29 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/02/29 15:47:11 by damlaerblan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stack>
#include <list>
#include <ctime>


class PmergeMe
{
    public:
        PmergeMe(void);
        ~PmergeMe(void);
        PmergeMe(const PmergeMe &other);
        PmergeMe operator=(const PmergeMe &other);
        bool isNumber(std::string str);
        void checkNums(char **argv);
        void printVec(std::vector<unsigned int>vec);
        std::vector<unsigned int> splitVec(int argc, char **argv);
        std::vector<unsigned int> mergeVec(std::vector<unsigned int> left, std::vector<unsigned int> right);
        std::vector<unsigned int> mergeSortVec(std::vector<unsigned int> vec);
        void printList(std::list<unsigned int> lst);
        std::list<unsigned int> mergeSortList(std::list<unsigned int> lst);
        std::list<unsigned int> mergeList(std::list<unsigned int> left, std::list<unsigned int> right);
        std::list<unsigned int> splitList(int argc, char **argv);

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