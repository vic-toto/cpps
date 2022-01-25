#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class	Zombie{
	
	private:
		std::string		name;

	public:
		Zombie();
		~Zombie();
		Zombie(std::string name) ;
		void	announce();

} ;

	void    randomChump(std::string name);
	Zombie	*newZombie(std::string name);

#endif