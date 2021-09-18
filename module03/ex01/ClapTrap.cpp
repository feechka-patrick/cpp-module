/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:43:29 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/18 17:38:28 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name): name(_name), hitpoints(10),
		energy_points(10), attack_damage(0) {}

ClapTrap::ClapTrap(const ClapTrap &obj) : name(obj.name), hitpoints(obj.hitpoints),
		energy_points(obj.energy_points), attack_damage(obj.attack_damage) {}

ClapTrap& ClapTrap::operator= (const ClapTrap& obj)
{
	this->name = obj.name;
	this->hitpoints = obj.hitpoints;
	this->energy_points = obj.energy_points;
	this->attack_damage = obj.attack_damage;

	return (*this);
}

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

