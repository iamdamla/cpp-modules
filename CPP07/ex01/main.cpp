#include <vector>
#include "Iter.hpp"

int main( void ) {
    std::cout << "intArray " << std::endl;
	size_t	size = 5;
	int		intArray[] = {0, 1, 2, 3, 4};
	::iter(intArray, size, ::display<int>);

    std::cout << std::endl;

    std::cout << "floatArray: " << std::endl;;
	float	floatArray[] = {0.1f, 1.1f, 2.2f, 3.3f, 4.4f};
	::iter(floatArray, size, display<float>);

    std::cout << std::endl;

    std::cout << "doubleArray: " << std::endl;;
	double	doubleArray[] = {0.1, 1.1, 2.2, 3.3, 4.4};
	::iter(doubleArray, size, display<double>);


    std::cout << std::endl;

    std::cout << "charArray: "<< std::endl;;
	char	charArray[] = {'a', 'b', 'c', 'd', 'e'};
	::iter(charArray, size, display<char>);

    std::cout << std::endl;

    std::cout << "stringArray: " << std::endl; ;
	std::string	strArray[] = {"abc", "bcd", "cde", "def", "efg"};
	::iter(strArray, size, display<std::string>);

	return (0);
}