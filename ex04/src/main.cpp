#include <iostream>
#include <string>
#include <fstream>

int error(std::string message)
{
	std::cerr << "Error !" << std::endl << message << std::endl;
	return 1;
}

int main(int ac, char **av)
{
	(void)av;
	if (ac != 4)
		return error("Stick to the standard: filename str1 str2");
	std::fstream file(av[1], std::ios::in | std::ios::out);
	if (!file.is_open())
		return error("Cannot access your file");
	return 0;
}
