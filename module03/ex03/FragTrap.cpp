/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:36:11 by nmisfit           #+#    #+#             */
/*   Updated: 2021/10/18 18:50:02 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " created\n";
	this->ClapTrap::setHitpoints(100);
	this->ClapTrap::setEnergyPoints(100);
	this->ClapTrap::setAttackDamage(30);
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap " << this->getName() << " created\n";
	this->ClapTrap::setHitpoints(100);
	this->ClapTrap::setEnergyPoints(100);
	this->ClapTrap::setAttackDamage(30);
}


void FragTrap::getInfo()
{
	std::cout << "FRAGTRAP " << this->getName() << " INFO\n"
		<< "HITPOINTS ......... " << this->getHitpoints() << "\n"
		<< "ENERGY POINTS ..... " << this->getEnergyPoints()<< "\n"
		<< "ATTACK DAMAGE ..... " << this->getAttackDamage() << "\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "ONE-FIVE REQUEST \n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->ClapTrap::getName() << " killed\n";
}