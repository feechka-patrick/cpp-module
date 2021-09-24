/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:36:11 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/24 16:38:45 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap " << this->ClapTrap::getName() << " created\n";
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap " << this->ClapTrap::getName() << " created\n";
	this->ClapTrap::setHitpoints(100);
	this->ClapTrap::setEnergyPoints(100);
	this->ClapTrap::setAttackDamage(30);
}


void FragTrap::getInfo()
{
	std::cout << "FRAGTRAP " << this->ClapTrap::getName() << " INFO\n"
		<< "HITPOINTS ......... " << this->ClapTrap::getHitpoints() << "\n"
		<< "ENERGY POINTS ..... " << this->ClapTrap::getEnergyPoints()<< "\n"
		<< "ATTACK DAMAGE ..... " << this->ClapTrap::getAttackDamage() << "\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->ClapTrap::getName() << " killed\n";
}