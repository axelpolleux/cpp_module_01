#include "Zombie.hpp"
#include "../includes/Zombie.hpp"

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
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}