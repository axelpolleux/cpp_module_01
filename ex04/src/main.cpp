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

	res = "";
	while ((found_i = str.find(word, current_i)) != std::string::npos)
	{
		res += str.substr(current_i, (found_i - current_i));
		res += new_word;
		current_i = (found_i + word.length());
	}
	res += str.substr(current_i);
	return res;
}

int main(int ac, char **av)
{
	std::string	line;
	std::string	outfile_name;

	if (ac != 4)
		return error("Follow the standard: filename str1 str2");
	outfile_name = av[1];
	outfile_name += ".replace";
	std::ifstream	Infile(av[1]);
	std::ofstream	Outfile(outfile_name);
	if (!Infile.is_open())
		return error("Cannot access your file");
	while ((std::getline(Infile, line)))
		Outfile << str_replace(line, av[2], av[3]) << std::endl;


	Infile.close();
	return 0;
}
