#include "Zombie.hpp"
#include "../includes/Zombie.hpp"

void			randomChump(std::string name)
{
	Zombie	*res;
	res = newZombie(name);
	res->announce();
}