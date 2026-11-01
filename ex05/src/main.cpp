#include <iostream>
#include "Harl.hpp"
#include "../includes/Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "One argument is required" << std::endl;
		return (1);
	}
	Harl	res;
	res.complain(av[1]);
	return 0;
}
