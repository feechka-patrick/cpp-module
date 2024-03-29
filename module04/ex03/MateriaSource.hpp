#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		int indexMateria;
		AMateria *learnedMaterias[4];
	public:
		MateriaSource();
		
		MateriaSource& operator= (const MateriaSource& obj);

		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const &type);

		~MateriaSource();
};

#endif
