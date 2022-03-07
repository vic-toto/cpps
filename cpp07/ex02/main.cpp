#include "Array.hpp"
#include <iostream>

int main()
{
	std::cout << "------ TESTING ARRAY OF INT ---------" << std::endl;
    unsigned int x = 5;

    Array <int>first;
    std::cout << "length: " << first.sizeA() << std::endl;

    Array <int> second(x);
    std::cout << "length: " << second.sizeA() << std::endl;

	second[3] = 42;
	
    std::cout << "Constructing new_array with = operator overload: " << std::endl;
    Array<int> third = second;
    std::cout << "length: " << third.sizeA() << std::endl;

    std::cout << "Trying to access elements in array with [] using wrong index:" << std::endl;
    try{
        std::cout << second.operator[](6);
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "Trying to access elements in array with [] using right index:" << std::endl;
    try{
        std::cout << second.operator[](3) << std::endl;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
	std::cout << "------ TESTING ARRAY OF STR ---------" << std::endl;

	unsigned int y = 4;

    Array <std::string>primo;
    std::cout << "length: " << primo.sizeA() << std::endl;

    Array<std::string> secondo(y);
    std::cout << "length: " << secondo.sizeA() << std::endl;
	secondo[2] = "top";
	secondo[3] = "Victoria";

    std::cout << "Constructing new_array (terzo) with = operator overload: " << std::endl;
    Array<std::string> terzo = secondo;
    std::cout << "length: " << terzo.sizeA() << std::endl;

    std::cout << "Using copy_array: " << std::endl;
    Array <std::string>copy_secondo(secondo);
    std::cout << "length: " << copy_secondo.sizeA() << std::endl;
    std::cout << "Trying to access elements in array with [] using wrong index:" << std::endl;
    try{
        std::cout << secondo.operator[](10);
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "Trying to access elements in array with [] using right index:" << std::endl;
    try{
        std::cout << secondo.operator[](3) << std::endl;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
	try{
        std::cout << secondo.operator[](2) << std::endl;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
}