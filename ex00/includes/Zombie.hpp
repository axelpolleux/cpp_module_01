#pragma once
#include <string>

class Zombie
{
private:
	std::string		_name;
public:
	Zombie();
	Zombie(std::string name);
	Zombie(const Zombie& other);
	Zombie& operator=(const Zombie& other);
	~Zombie();

	void			announce(void);
	Zombie			*newZombie(std::string name);
	void			randomChump(std::string name);
};
