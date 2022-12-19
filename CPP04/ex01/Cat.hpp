#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain			*brain;		
	public:
		Cat();
		Cat(const Cat &src);
		virtual		~Cat();
		Cat			&operator=(const Cat &src);

		virtual void    	makeSound() const;
		void				setBrainIdea(int i, const std::string &newIdea);
		const std::string	&getBrainIdea(int i) const;
};

#endif

// Modifier le fichier CPP