#include "Zombie.hpp"

/* Creates a new zombie using new and returns its pointer */
Zombie	*newZombie(std::string name)
{
    Zombie	*newZombie;

	newZombie = new Zombie;
	newZombie->baptized(name);
	return (newZombie);
}