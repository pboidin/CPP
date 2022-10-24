#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

/* Sample main function to show how the classes work */
int	main(void)
{
	Zombie fooZombie;
	Zombie	*zombie;

	fooZombie.set_name("Foo");
	fooZombie.announce();
	zombie = newZombie("New Zombo");
	zombie->announce();
	randomChump("Random");
	delete zombie;
	return (0);
}
