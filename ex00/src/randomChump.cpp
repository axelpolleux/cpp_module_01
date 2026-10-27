#include "Zombie.hpp"

void			randomChump(std::string name)
{
	Zombie	*res;
	res = newZombie(name);
	res->announce();
	delete res;
}
