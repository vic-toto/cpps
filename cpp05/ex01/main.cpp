#include "Bureaucrat.hpp"
//#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a("Victoria", 1);
        Bureaucrat b("Moya", 149);
        Bureaucrat c("Anna", 150);
        Form x("Report", 150, 150);
        Form y("Promotion", 1, 1);
        Form z("Firing", 149, 149);
    
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
        a.signForm(y);
        b.signForm(y);
        b.signForm(z);
        c.signForm(x);
        std::cout << x << std::endl;
        std::cout << y << std::endl;
        std::cout << z << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}