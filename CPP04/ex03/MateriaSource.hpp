#ifndef MATERIALSOURCE_HPP
# define MATERIALSOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "Character.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *_inventory[MAX_INV];
    public:
    	MateriaSource();
		MateriaSource(const MateriaSource &src);
    	virtual				~MateriaSource();
		MateriaSource		&operator=(const MateriaSource &src);
		const AMateria		*getMateria(int i) const;
		virtual void		learnMateria(AMateria *materia);
		virtual AMateria	*createMateria(std::string const &type);
};

#endif