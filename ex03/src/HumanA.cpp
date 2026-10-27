#include "HumanA.hpp"
#include <iostream>

#include "../includes/HumanA.hpp"

HumanA::HumanA()
{

	_name = "";
	_weapon = NULL;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	_name = name;
	_weapon = &weapon;
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanA::~HumanA()
{

}
