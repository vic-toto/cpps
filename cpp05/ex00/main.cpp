#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("Vic", 2);
        Bureaucrat b("Toria", 148);
      
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << "\nDoing increments and decrements..." << std::endl;
    
        a.decrement(1);
        b.increment(1);
       
        std::cout << a.getGrade() << std::endl;
        std::cout << b.getGrade() << std::endl;

        a.decrement(1);
        b.increment(1);

        std::cout << "Name: " << a.getName() << " has grade " << a.getGrade() << std::endl;
        std::cout << "Name: " << b.getName() << " has grade " << b.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}