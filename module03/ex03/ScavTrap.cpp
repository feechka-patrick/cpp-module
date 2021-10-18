/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:48:50 by nmisfit           #+#    #+#             */
/*   Updated: 2021/10/18 19:20:39 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " created\n";
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "ScavTrap " << this->getName() << " created\n";
	this->setHitpoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap "<< this->getName()  <<" attack "
		<< target << ", causing "<< this->getAttackDamage() <<" points of damage!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->getName() << " have enterred"
		<< " in Gate keeper mode\n";
}

void ScavTrap::getInfo()
{
	std::cout << "SCAVTRAP " << this->getName() << " INFO\n"
		<< "HITPOINTS ......... " << this->getHitpoints() << "\n"
		<< "ENERGY POINTS ..... " << this->getEnergyPoints()<< "\n"
		<< "ATTACK DAMAGE ..... " << this->getAttackDamage() << "\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " killed\n";
}