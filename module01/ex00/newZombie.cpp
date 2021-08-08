/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:33:14 by nmisfit           #+#    #+#             */
/*   Updated: 2021/08/08 14:34:38 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *::newZombie(std::string name)
{
	Zombie newzombie;
	newzombie.name = name;
	return (&newzombie);
}