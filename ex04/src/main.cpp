#include <iostream>
#include <string>
#include <fstream>

int error(std::string message)
{
	std::cerr << "Error !" << std::endl << message << std::endl;
	return 1;
}

std::string str_replace(std::string str, std::string word, std::string new_word)
{
	size_t		current_i = 0;
	size_t		found_i = current_i;
	std::string res;

	while (current_i != str.length())
	{
		found_i = str.find(word);
		if (found_i != std::string::npos)
		{
			res.append(str.substr(current_i, found_i));
			res.append(new_word);
		}
		std::cout << res << std::endl;
		current_i += found_i + word.length();
	}

	res = "";

	(void)str;
	(void)word;
	(void)new_word;
	(void)current_i;
	(void)found_i;
	(void)res;
	return res;
}

int main(int ac, char **av)
{
	std::string	line;

	if (ac != 4)
		return error("Follow the standard: filename str1 str2");
	std::fstream file(av[1], std::ios::in | std::ios::out);
	if (!file.is_open())
		return error("Cannot access your file");
	while (true)
	{
		std::getline(file, line);
		if (line.empty())
			break ;
		std::cout << str_replace(line, av[2], av[3]) << std::endl;
	}
	file.close();
	return 0;
}
