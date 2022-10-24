#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie;

	if (N < 0)
		return (NULL);
	zombie = new Zombie[N];
	while (0 < N--)
		zombie[N].baptized(name);
	return (zombie);
}