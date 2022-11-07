#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>

class Zombie
{
    public:
        Zombie(void);
        ~Zombie();

		void	announce(void);
        void    baptized(std::string name);

    private:
        std::string	_name;
};

#endif