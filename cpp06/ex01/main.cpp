#include "Data.hpp"

int main()
{
	Data* data = new Data;
	uintptr_t uni = 0;
	Data *data2;

	std::cout << "uintptr_t uni = serialize(data) | " << (uni = serialize(data))<< std::endl;
	std::cout << "Deserialize(uni) | "<< deserialize(uni) << std::endl;
	std::cout << "Data *data2 = deserialize(uni) | "<< (data2 = deserialize(uni)) << std::endl;
	std::cout << "Serializatiom(data2) | " << serialize(data2) << std::endl;
	delete data;
	return (0);
}