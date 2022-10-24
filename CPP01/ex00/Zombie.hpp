#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

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