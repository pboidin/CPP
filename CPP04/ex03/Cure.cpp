#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	
}

Cure::Cure(std::string const &type) : AMateria(type)
{
	this->_type = type;
}

Cure::Cure(const Cure &src)
{
	*this = src;
}

Cure::~Cure()
{

}

Cure	&Cure::operator=(const Cure &src)
{
	this->_type = src._type;
	return (*this);
}

AMateria	*Cure::clone() const
{
	AMateria	*newCure;

	try
	{
		newCure = new Cure;
		return (newCure);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
		throw (e);
		return (NULL);
	}
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
