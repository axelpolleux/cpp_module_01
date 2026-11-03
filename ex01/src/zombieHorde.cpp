#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	res;

	if (N < 1)
	{
		std::cerr << "Negative numbers are forbidden" << std::endl;
		return NULL;
	}
	res = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		res[i] = Zombie(name);
	}
	return res;
}
