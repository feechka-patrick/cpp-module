/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:48:50 by nmisfit           #+#    #+#             */
/*   Updated: 2021/10/22 16:01:10 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " created\n";
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap " << this->name << " created\n";
	this->hitpoints = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name  << " have enterred"
		<< " in Gate keeper mode\n";
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap "<< this->name   <<" attack "
		<< target << ", causing "<< this->attack_damage <<" points of damage!\n";
}

void ScavTrap::getInfo()
{
	std::cout << "SCAVTRAP " << this->name << " INFO\n"
		<< "HITPOINTS ......... " << this->hitpoints << "\n"
		<< "ENERGY POINTS ..... " << this->energy_points<< "\n"
		<< "ATTACK DAMAGE ..... " << this->attack_damage << "\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name  << " killed\n";
}