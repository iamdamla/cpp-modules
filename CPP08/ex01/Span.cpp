#include "Span.hpp"

Span::Span( void ) : _n(10), _arr() {}
Span::Span( unsigned int n) : _n(n), _arr(){}
Span::Span( const Span &other)
{
    this->_n = other._n;
    this->_arr = other._arr;
}
Span & Span::operator=(const Span &other)
{
    if(this != &other)
    {
        this->_n = other._n;
        this->_arr = other._arr;
    }
    return (*this);
}
Span::~Span( void ){}

void Span::addNumber(unsigned int addNbr)
{
    if(_arr.size() == _n)
        throw std::logic_error("There are no space left for adding the number");
    _arr.push_back(addNbr);
}

unsigned int Span::shortestSpan( void ) const
{
    if(_arr.size() < 2)
        throw std::out_of_range("Not enough numbers to calculate shortest span");
    int diff = abs(_arr[0] - _arr[1]);
    for(std::size_t i = 0; i < _arr.size(); i++)
    {
        for(std::size_t j = i + 1; j < _arr.size(); j++)
            if(abs(_arr[i] - _arr[j]) < diff)
                diff = abs(_arr[i] - _arr[j]);
    }
    return diff;
}

unsigned int Span::longestSpan(void) const
{
    if(_arr.size() < 2)
        throw std::out_of_range("Not enough numbers to calculate longest span");
    int min = *min_element(_arr.begin(), _arr.end());
    int max = *max_element(_arr.begin(), _arr.end());
    return static_cast<unsigned int>(max - min);
}


void Span::print( void)
{
    for(std::vector<int>::const_iterator it = _arr.begin(); it != _arr.end(); it++)
    {
        std::cout << *it << std::endl;
    }
}