/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:43:31 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/24 16:15:19 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hitpoints;
		int energy_points;
		int attack_damage;
		
	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(const ClapTrap &obj);
		
		ClapTrap& operator= (const ClapTrap& obj);

		std::string getName();
		void setName(const std::string &_name);
		
		void setHitpoints(const int &_hitpoints);
		int getHitpoints();
		
		void setEnergyPoints(const int &_energy_points);
		int getEnergyPoints();
		
		void setAttackDamage(const int &_attack_damage);
		int getAttackDamage();
		
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		~ClapTrap();
};

#endif