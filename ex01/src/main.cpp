#include "Zombie.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	int number;

	(void)ac;
	number = atoi(av[1]);
	Zombie *res = zombieHorde(14, "Gregouin");
	for (int i = 0; i < number; i++)
	{
		std::cout << i << ": ";
		res[i].announce();
	}
	return 0;
}
