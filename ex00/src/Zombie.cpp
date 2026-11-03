#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	this->_name = "Nothing here";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << _name << " DESTROYED" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}