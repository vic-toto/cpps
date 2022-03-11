#ifndef SPAN_HPP
#define SPAN_HPP
#include <vector>
#include <iostream>

class Span
{
	private:
		const unsigned int size;
	public:
		unsigned int ind;
		std::vector<int> arr;
		Span(unsigned int size);
		Span(const Span &copia);
		Span& operator= (const Span &uguale);
		~Span();
		void addNumber(int n);
		unsigned int getSize() const;
		unsigned int shortestSpan();
		unsigned int longestSpan();
		class NotSpace: public std::exception
		{
		public:
			virtual const char* what() const throw();
		};
		class NoSpan: public std::exception
		{
		public:
			virtual const char* what() const throw();
		};
};

#endif