#include "Span.hpp"

Span::Span(const unsigned int size) : size(size)
{
	ind = 0;
}

Span::~Span()
{
}

Span::Span(const Span &copia) : size(copia.getSize())
{
	*this = copia;
}

Span & Span::operator= (const Span &uguale)
{
	arr = uguale.arr;
	ind = uguale.ind;
	return *this;
}

unsigned int Span::getSize() const
{
	return(size);
}

const char* Span::NotSpace::what() const throw() {
	return "Not enough space in array";
}

const char* Span::NoSpan::what() const throw() {
	return "Not enough element in array";
}

unsigned int Span::longestSpan()
{
	if(ind < 2)
		throw NoSpan();
	return *(std::max_element(arr.begin(), arr.end())) - *(std::min_element(arr.begin(), arr.end()));
}

unsigned int Span::shortestSpan()
{
	if(ind < 2)
		throw NoSpan();
	unsigned int *res = new unsigned int;
	*res = std::numeric_limits<unsigned int>::max();
	std::vector<int> copia(arr);
	std::sort(copia.begin(), copia.end()); 
	for(std::vector<int>::iterator i = copia.begin(); i != copia.begin() + (ind - 1); i++){
		if(*res > static_cast<unsigned int>(*(i + 1) - *i))
			*res = *(i + 1) - *i;
	}
	return *res;
}

void Span::addNumber(int n)
{
	if(getSize() == ind)
		throw NotSpace();
	ind++;
	arr.push_back(n);
	std::cout << n << " è stato aggiunto" << std::endl;
}