#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <vector>
#include <deque>
#include <iterator>
#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(): std::stack<T>(){};
		~MutantStack() {};
		MutantStack(const MutantStack &copia) {*this = copia;};
		MutantStack &operator= (const MutantStack &uguale){
			std::stack<T>::operator= (uguale);
			return *this;
		}
		typedef typename std::deque<T>::iterator iterator;
		iterator begin(void){return(this->c.begin());};
		iterator end(void){return(this->c.end());};
};

#endif