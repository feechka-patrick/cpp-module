/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:51:18 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/15 21:31:44 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << this->name << " attacks with his ";
	std::cout << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(_weapon) {}
