# include "Zombie.hpp"

/* Constructor : */
Zombie::Zombie(void)
{
    std::cout << "New Zombie appears ..." << std::endl;
}

/* Destructor :*/
Zombie::~Zombie()
{
    std::cout << _name << " disappear." << std::endl;
}

/* Function that annouce its own name */
void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* Function for the class's name */
void    Zombie::baptized(std::string name)
{
    this->_name = name;
    std::cout << "Zombie's baptized to: " << name << std::endl;
}
