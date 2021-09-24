/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:43:29 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/24 16:20:37 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("default"), hitpoints(10),
		energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << this->getName() << " created\n";
}
		
ClapTrap::ClapTrap(std::string _name): name(_name), hitpoints(10),
		energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap " << this->getName() << " created\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj) : name(obj.name), hitpoints(obj.hitpoints),
		energy_points(obj.energy_points), attack_damage(obj.attack_damage)
{
	std::cout << "ClapTrap " << this->getName() << " created\n";
}

ClapTrap& ClapTrap::operator= (const ClapTrap& obj)
{
	this->name = obj.name;
	this->hitpoints = obj.hitpoints;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;

	return (*this);
}

std::string ClapTrap::getName() { return (this->name); }
void ClapTrap::setName(const std::string &_name) { this->name = _name; }

int ClapTrap::getHitpoints() { return (this->hitpoints); }
void ClapTrap::setHitpoints(const int &_hitpoints) { this->hitpoints = _hitpoints; }

int ClapTrap::getEnergyPoints() { return (this->energy_points); }
void ClapTrap::setEnergyPoints(const int &_energy_points) { this->energy_points = _energy_points; }

int ClapTrap::getAttackDamage() { return (this->attack_damage); }
void ClapTrap::setAttackDamage(const int &_attack_damage) { this->attack_damage = _attack_damage; }

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap "<< this->name <<" attack "
		<< target << ", causing "<< this->attack_damage <<" points of damage!\n";
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name <<" take damage on " 
		<< amount << " points\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name <<" repaired on " 
		<< amount << " points\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->getName() << " killed\n";
}
