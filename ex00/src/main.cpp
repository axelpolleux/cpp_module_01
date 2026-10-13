#include "Zombie.hpp"
#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie zombie;
	Zombie *test;
	test = newZombie("Gregouin");
	test.announce();
	delete test;
	return 0;
}
