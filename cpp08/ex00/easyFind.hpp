#ifndef EASYFIND_HPP
#define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>
# include <exception>
# include <deque>
# include <array>

class NotFound: public std::exception
{
	public:
		 virtual const char* what() const throw();
};

template<typename T>
typename T::iterator easyfind(T& first, int n)
{
	typename T::iterator ret;
	ret = std::find(first.begin(), first.end(), n);
	if (ret == first.end())
		throw NotFound();
	return ret;
}

const char* NotFound::what() const throw()
{
	return "Element not found";
}

#endif