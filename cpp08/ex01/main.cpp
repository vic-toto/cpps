#include "Span.hpp"

int main()
{
	Span mario(4);

	try
	{
		mario.addNumber(5);
		mario.addNumber(-1);
		mario.addNumber(9);
		mario.addNumber(8);
		mario.addNumber(9);
		mario.addNumber(2); 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "longest = " << mario.longestSpan() << std::endl;
		std::cout << "shortest = " << mario.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl << std::endl;

	Span sp = Span(5);
	
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "longest = " <<  sp.shortestSpan() << std::endl;
		std::cout << "shortest = " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


}