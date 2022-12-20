#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("Bob");
	std::cout << "name: " << a.getName() << std::endl;
    std::cout << "Hp: " << a.getHp() << std::endl;
    std::cout << "Ep: " << a.getEp() << std::endl;
    std::cout << "Ad: " << a.getAd() << std::endl;
    a.attack("Fake Bob");
    DiamondTrap b(a);
    b.attack("Fake Bob 2");
    DiamondTrap c;
    c = b;
	c.attack("Bob?");
	for (int i = 0; i < 50; i++)
		c.attack("noob");
	return (0);
}