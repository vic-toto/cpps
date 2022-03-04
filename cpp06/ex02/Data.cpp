#include "Data.hpp"

Data::Data()
{
    std::cout << "DEFAULT DATA CONSTRUCTOR" << std::endl;
    i = 1;
    b = true;
    str = "ciao";
}

Data::~Data()
{
}

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}
