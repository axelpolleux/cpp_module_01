#include "Zombie.hpp"
#include "../includes/Zombie.hpp"
#include <iostream>

Zombie(void)
{
	this->_name = "noname";
}

Zombie(std::string name)
{
	this->_name = name;
}

~Zombie()
{
}

void	Zombie::announce(void)
{
	std::cout << Zombie._name << ": BraiiiiiiinnnzzzZ...";
}