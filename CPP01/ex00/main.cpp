#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	fooZombie;
	Zombie	*zombie;

	fooZombie.baptized("Foo");
	fooZombie.announce();
	zombie = newZombie("New Zombie");
	zombie->announce();
	randomChump("Random");
	delete zombie;
	return (0);
}