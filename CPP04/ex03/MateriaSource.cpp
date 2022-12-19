# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < MAX_INV; i++)
        this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
    *this = src;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < MAX_INV; i++)
        if (this->_inventory[i] != NULL)
            delete (this->_inventory[i]);
}

MateriaSource   &MateriaSource::operator=(const MateriaSource &src)
{
    const AMateria *tmp;
    for (int i = 0; i < MAX_INV; i++)
    {
        tmp = src.getMateria(i);
        if (tmp != NULL)
            this->_inventory[i] = tmp->clone();
        else
            this->_inventory[i] = NULL;
    }
    return (*this);
}

const AMateria  *MateriaSource::getMateria(int i) const
{
    if (i < 0 || i > MAX_INV)
        return (NULL);
    return (this->_inventory[i]);
}

void    MateriaSource::learnMateria(AMateria *materia)
{
    for (int i = 0; i < MAX_INV; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = materia;
            break ;
        }
    }
}

AMateria    *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < MAX_INV; i++)
    {
        if (this->_inventory[i] == NULL)
            break ;
        if (this->_inventory[i]->getType() == type)
            return (this->_inventory[i]->clone());
    }
    return (0);
}