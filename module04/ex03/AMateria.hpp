#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>

class ICharacter;

class AMateria
{
	private:
		std::string type;
	protected:
		AMateria();
	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &obj);
		AMateria& operator= (const AMateria& obj);

		std::string const &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

		virtual ~AMateria();
};

# include "ICharacter.hpp"

#endif
