#include "Iter.hpp"

int main()
{
	int array[] = {0, 1, 2, 3};
	std::string array2[] = {"victoia ", "moya ", "anna ", "ceccaroni"};
	iter(array, 4, print);
	iter(array2, 4, print);
	return (0);
}