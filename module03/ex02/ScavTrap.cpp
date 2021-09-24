/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:48:50 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/24 16:30:20 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap " << this->ClapTrap::getName() << " created\n";
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap " << this->ClapTrap::getName() << " created\n";
	this->ClapTrap::setHitpoints(100);
	this->ClapTrap::setEnergyPoints(50);
	this->ClapTrap::setAttackDamage(20);
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->ClapTrap::getName() << " have enterred"
		<< " in Gate keeper mode\n";
}

void ScavTrap::getInfo()
{
	std::cout << "SCAVTRAP " << this->ClapTrap::getName() << " INFO\n"
		<< "HITPOINTS ......... " << this->ClapTrap::getHitpoints() << "\n"
		<< "ENERGY POINTS ..... " << this->ClapTrap::getEnergyPoints()<< "\n"
		<< "ATTACK DAMAGE ..... " << this->ClapTrap::getAttackDamage() << "\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->ClapTrap::getName() << " killed\n";
}