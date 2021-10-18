# include "DiamondTrap.hpp"

int main()
{
	DiamondTrap trapp("VALERA");
	std::cout << std::endl;

	trapp.whoAmI();
	std::cout << std::endl;

	trapp.getInfo();
	std::cout << std::endl;

	trapp.attack("BORIS");
	std::cout << std::endl;
}