#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int number = 14;

	Zombie *res = zombieHorde(number, "Gregouin");
	for (int i = 0; i < number; i++)
	{
		std::cout << i << ": ";
		res[i].announce();
	}
	delete[] res;
	return 0;
}
