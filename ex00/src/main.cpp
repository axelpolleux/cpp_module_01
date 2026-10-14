#include "Zombie.hpp"
#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*res;
	res = newZombie("Belmondo");
	res->announce();
	randomChump("Delon");
	delete res;
	return 0;
}
