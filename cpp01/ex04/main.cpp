#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::ifstream oldFile;
	std::ofstream newFile;
	std::string		fileName;
	std::string		s1;
	std::string		s2;
	std::string		str;

	if (argc >= 4)
	{
		fileName.assign(argv[1]);
		s1.assign(argv[2]);
		s2.assign(argv[3]);
		if (s1.empty() || s2.empty()){
			std::cout << "Error: empty string" << std::endl;
			return (1);
		}
		oldFile.open(fileName);
		if (oldFile.is_open()){
			newFile.open(fileName + ".replace");
			while(getline(oldFile, str))
			{
				size_t i = 0;
				i = str.find(s1, i);
				if (i < str.length()){
					str.erase(i, s1.length());
					str.insert(i, s2);
				}
				newFile << str << std::endl;
			}
		}
		else{
			std::cout << "Error in opening file" << std::endl;
			return (1);
		}
		oldFile.close();
		newFile.close();
	}
	else{
		std::cout << "Too few arguments, at least one file and two strings" << std::endl;
	}
	return (0);

}