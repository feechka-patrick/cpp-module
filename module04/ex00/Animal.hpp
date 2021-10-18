#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &obj);
		
		Animal& operator= (const Animal& obj);

		void virtual makeSound() const; 
		std::string getType() const;

		~Animal();
};

#endif
