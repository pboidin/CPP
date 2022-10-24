#include "Zombie.hpp"

/* Function creates the zombie, baptized him & announce itself */
void	randomChump(std::string name)
{
	Zombie	newZombie;

	newZombie.baptized(name);
	newZombie.announce();
}