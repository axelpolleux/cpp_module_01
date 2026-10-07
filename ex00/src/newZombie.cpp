#include "Zombie.hpp"
#include "../includes/Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*res = new Zombie;
	res._name = name;
	return	res;
}
