#ifndef ARRAY_HPP
#define ARRAY_HPP 

#include <iostream>
#include <exception>
#include <string>

template <typename T>
class Array{
    private:
            T *array;
            unsigned int size;
    public:
            Array<T>();
            Array<T>(unsigned int n);
			Array<T>(const Array &copy);
			Array& operator= (const Array &uguale);
			T& operator[] (unsigned int i);
			unsigned int sizeA() const;
			~Array<T>();
			class excepLimits : public std::exception
			{
				public:
					virtual const char* what() const throw();
			};
};

template<typename T>
Array<T>::Array()
{
	std::cout << "\nDefault constructor for array" << std::endl;
	array = NULL;
	size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "\nConstructor with size for array" << std::endl;
	array = new T[n];
	size = n;
}

template<typename T>
Array<T>::Array(const Array<T> &copy)
{
	std::cout << "\nCopy constructor for array" << std::endl;
	array = NULL;
	*this = copy;
}

template<typename T>
Array<T> & Array<T>::operator= (const Array<T> &uguale)
{
	if (size)
		delete [] array;
	size = uguale.sizeA();
	array = new T [size];
	for(unsigned int i = 0; i < uguale.sizeA(); i++)
		array[i] = uguale.array[i];
	return *this;
}

template<typename T>
T & Array<T>::operator[] (unsigned int i)
{
	if(i < size && i >= 0)
		return array[i];
	else
		throw excepLimits();
}

template<typename T>
Array<T>::~Array()
{
	delete [] array;
}

template<typename T>
unsigned int Array<T>::sizeA() const
{
	return(size);
}

template<typename T>
const char* Array<T>::excepLimits::what() const throw()
{
	return "Out of limit";
}

#endif