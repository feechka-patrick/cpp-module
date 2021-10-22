# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : name("default"), ClapTrap("default_clap_name")
{
	std::cout << "DiamondTrap default created\n";
	this->hitpoints = 100;
	//this->energy_points = 50;
	this->attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string _name) : name(_name), ClapTrap(_name + "_clap_name")
{
	std::cout << "DiamondTrap " << _name << " created\n";
	this->hitpoints = 100;
	//this->energy_points = this->ScavTrap::energy_points;
	this->attack_damage = 30;
}

void DiamondTrap::whoAmI()
{
	std::cout << "My name DIAMONDTRAP " << this->name << "\n"
			<< "CLAPTRAP .. " << this->ClapTrap::name << "\n";

}

void DiamondTrap::getInfo()
{
	std::cout << "DIAMONDTRAP " << this->name << " INFO\n"
		<< "HITPOINTS ......... " << this->hitpoints << "\n"
		<< "ENERGY POINTS ..... " << this->energy_points<< "\n"
		<< "ATTACK DAMAGE ..... " << this->attack_damage << "\n";
}

void DiamondTrap::attack(std::string const & target)
{
	std::cout << "DiamondTrap "<< this->name   << " attack "
		<< target << ", causing "<< this->attack_damage <<" points of damage!\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " killed\n";
}