#include <iostream>
#include "Zombie.hpp"
#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*test = Zombie::newZombie("Gregouin");
	test->Zombie::announce();
	return 0;
}
