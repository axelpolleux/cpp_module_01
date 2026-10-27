#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB()
{
	_name = "";
	_weapon = NULL;
}

HumanB::HumanB(std::string name)
{
	_name = name;
}

void	HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &new_type)
{
	_weapon = &new_type;
}

HumanB::~HumanB()
{

}
