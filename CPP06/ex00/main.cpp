#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        if(argc > 2)
            std::cerr << "Too many arguments" << std::endl;
        else
            std::cerr << "Too few arguments" << std::endl;
        return 1;
    }
   
    ScalarConverter::convert(argv[1]);
    return 0;

}