# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : name("default"), ClapTrap("default_clap_name")
{
	std::cout << "DiamondTrap default created\n";
	this->ClapTrap::setAttackDamage(30);
}

DiamondTrap::DiamondTrap(std::string _name) : name(_name), ClapTrap(_name + "_clap_name")
{
	std::cout << "DiamondTrap " << _name << " created\n";
	this->ClapTrap::setAttackDamage(30);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name DIAMONDTRAP " << this->name << "\n"
			<< "CLAPTRAP .. " << this->getName() << "\n";

}

void DiamondTrap::getInfo()
{
	std::cout << "DIAMONDTRAP " << this->name << " INFO\n"
			<< "HITPOINTS ......... " << this->getHitpoints() << "\n"
			<< "ENERGY POINTS ..... " << this->getEnergyPoints()<< "\n"
			<< "ATTACK DAMAGE ..... " << this->getAttackDamage() << "\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " killed\n";
}