#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen	karen;
	std::string	string;
	
	if (argc != 2){
		std::cout << "Missing input string" << std::endl;
		return (1);
	}
	string.assign(argv[1]);
	karen.setKeys(string);
	karen.complain("DEBUG");
	karen.complain("INFO");
	karen.complain("WARNING");
	karen.complain("ERROR");
	return (0);
}