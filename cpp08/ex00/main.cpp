#include "easyFind.hpp"

int main()
{
	std::cout << "------------VECTOR------------" << std::endl;
	std::vector<int> vec;

	vec.push_back(12);
	vec.push_back(11);
	vec.push_back(111);

	std::vector<int>::iterator i;

	try
	{
		i = easyfind(vec, 1);
		std::cout << *i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		i = easyfind(vec, 11);
		std::cout << *i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "------------ARRAY------------" << std::endl;
	std::array<int, 5> str = {1, 541, 98, 8, 10};
	std::array<int, 5>::iterator ii;

	try
	{
		ii = easyfind(str, 8);
		std::cout << *ii << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}