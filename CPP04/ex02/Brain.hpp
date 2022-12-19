#ifndef BRAIN_CPP
# define BRAIN_CPP

#include <iostream>
#include <string>

# define IDEAS 100

class Brain
{
	private:
		std::string		_ideas[IDEAS];
	public:
		Brain();
		Brain(const Brain &src);
		virtual				~Brain();
		Brain				&operator=(const Brain &src);

		void				setIdea(int i, const std::string &newIdea);
		const std::string	&getIdea(int i) const;
};

#endif