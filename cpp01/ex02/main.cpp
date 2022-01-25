#include <iostream>
#include <string>


int     main()
{
    std::string     string = "HI THIS IS BRAIN";
    std::string     *stringPTR = &string;
    std::string     &stringREF = string; 

    std::cout << "String: " << string << std::endl;
    std::cout << "Address of string: " << &string << std::endl;
    std::cout << "Address of string via stringPTR: " << stringPTR << std::endl;
    std::cout << "Address of string via stringREF: " << &stringREF << std::endl;
    std::cout << "String via stringPTR: " << *stringPTR << std::endl;
    std::cout << "String via stringREF: " << stringREF << std::endl;
    return (0);
}