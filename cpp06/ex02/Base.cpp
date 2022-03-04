#include "Base.hpp"

Base::~Base(){}

Base* generate(void)
{
    srand(time(NULL));
    Base *ptr = NULL;

    switch(rand() % 3)
    {
    case 0:
        ptr = new A;
        std::cout << "Generated A" << std::endl;
        break ;
    case 1:
        ptr = new B;
        std::cout << "Generated B" << std::endl;
        break ;
    case 2:
        ptr = new C;
        std::cout << "Generated C" << std::endl;
        break ;
    }
    return ptr;
}

void    identify(Base *p)
{
    A* ptrA = dynamic_cast<A*>(p);
	B* ptrB = dynamic_cast<B*>(p);
	C* ptrC = dynamic_cast<C*>(p);
	if (ptrA)
		std::cout << "A spotted" << std::endl;
	else if (ptrB)
		std::cout << "B spotted" << std::endl;
	else if (ptrC)
		std::cout << "C spotted" << std::endl;
	else
		std::cout << "nothing" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A baseA = dynamic_cast<A&>(p);
		std::cout << "A found" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			B baseB = dynamic_cast<B&>(p);
			std::cout << "B found" << std::endl;
		}
		catch(const std::exception& e)
		{
			C baseC = dynamic_cast<C&>(p);
			std::cout << "C found" << std::endl;
		}
	}
}
