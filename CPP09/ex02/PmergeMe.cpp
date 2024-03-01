/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damlaerblang <damlaerblang@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:00:31 by damlaerblan       #+#    #+#             */
/*   Updated: 2024/02/29 16:06:12 by damlaerblan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void){}
PmergeMe::~PmergeMe(void){}
PmergeMe::PmergeMe(const PmergeMe &other)
{
   *this = other;
}
PmergeMe PmergeMe::operator=(const PmergeMe &other)
{
    if(this != &other)
        return (*this);
    return (*this);
}

bool PmergeMe::isNumber(std::string str)
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

void PmergeMe::checkNums(char **argv)
{
    int i = 0;
    while(argv[++i])
    {
        if(!isNumber(argv[i]))
            throw errMsg("Input must be numbers");
    }
}

void PmergeMe::printVec(std::vector<unsigned int> vec)
{
    std::vector<unsigned int>::iterator it;
    for(it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

std::vector<unsigned int> PmergeMe::splitVec(int argc, char **argv)
{
    std::vector<unsigned int> vec;
    for(int i = 1; i < argc; i++)
    {
        std::istringstream iss(argv[i]);
        unsigned int nb;
        iss >> nb;
        vec.push_back(nb);
    }
    return vec;
}

std::vector<unsigned int> PmergeMe::mergeVec(std::vector<unsigned int> left, std::vector<unsigned int> right)
{
    std::vector<unsigned int> vec;
    while(!left.empty() && !right.empty())
    {
        if(left.front() < right.front())
        {
            vec.push_back(left.front());
            left.erase(left.begin());
        }
        else
        {
            vec.push_back(right.front());
            right.erase(right.begin());
        }
    }
    while(!left.empty())
    {
        vec.push_back(left.front());
        left.erase(left.begin());
    }
    while(!right.empty())
    {
        vec.push_back(right.front());
        right.erase(right.begin());
    }
    return (vec);
}

std::vector<unsigned int> PmergeMe::mergeSortVec(std::vector<unsigned int> vec)
{
    int len = vec.size();
    int mid = len / 2;
    std::vector<int> res;
    std::vector<unsigned int> left(vec.begin(), vec.begin() + mid);
    std::vector<unsigned int> right(vec.begin() + mid, vec.end());

    if(vec.size() <= 1)
        return vec;
    left = mergeSortVec(left);
    right = mergeSortVec(right);
    return (mergeVec(left, right));
}


std::list<unsigned int> PmergeMe::splitList(int argc, char **argv)
{
    std::list<unsigned int> lst;
    
    for(int i = 1; i < argc; i++)
    {
        std::istringstream iss(argv[i]);
        unsigned int nb;
        iss >> nb;
        lst.push_back(nb);
    }
    return lst;
}

std::list<unsigned int> PmergeMe::mergeList(std::list<unsigned int> left, std::list<unsigned int> right)
{
    std::list<unsigned int> lst;
    
    while(!left.empty() && !right.empty())
    {
        if(left.front() < right.front())
        {
            lst.push_back(left.front());
            left.erase(left.begin());
        }
        else
        {
            lst.push_back(right.front());
            right.erase(right.begin());
        }
    }
    while(!left.empty())
    {
        lst.push_back(left.front());
        left.erase(left.begin());
    }
    while(!right.empty())
    {
        lst.push_back(right.front());
        right.erase(right.begin());
    }
    return (lst);
}

std::list<unsigned int> PmergeMe::mergeSortList(std::list<unsigned int> lst)
{
    int len = lst.size();
    int mid = len / 2;
    std::list<unsigned int> left;
    std::list<unsigned int> right;
    
    if(lst.size() <= 1)
        return (lst);
    for(int i = 0; i < mid; i++)
    {
        left.push_back(lst.front());
        lst.pop_front();
    }
    right = lst;
    left = mergeSortList(left);
    right = mergeSortList(right);
    return (mergeList(left, right));
}

void PmergeMe::printList(std::list<unsigned int> lst)
{
    std::list<unsigned int>::iterator it;
    for(it = lst.begin(); it != lst.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}