#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::string *stringPTR;
	std::string &stringREF;

	str = "HI THIS IS BRAIN";
	stringPTR = str;
	stringREF = str;

	std::cout << str << std::endl;
}
