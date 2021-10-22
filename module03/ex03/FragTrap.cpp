/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:36:11 by nmisfit           #+#    #+#             */
/*   Updated: 2021/10/22 16:26:19 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap " << this->name << " created\n";
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	std::cout << "FragTrap " << this->name << " created\n";
	this->hitpoints = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
}

void FragTrap::getInfo()
{
	std::cout << "FRAGTRAP " << this->name << " INFO\n"
		<< "HITPOINTS ......... " << this->hitpoints << "\n"
		<< "ENERGY POINTS ..... " << this->energy_points<< "\n"
		<< "ATTACK DAMAGE ..... " << this->attack_damage << "\n";
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap "<< this->name   << " attack "
		<< target << ", causing "<< this->attack_damage <<" points of damage!\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "ONE-FIVE REQUEST \n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " killed\n";
}