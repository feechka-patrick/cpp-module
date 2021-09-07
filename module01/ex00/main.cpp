/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:36:55 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/07 20:00:16 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie1 = newZombie("pavelitel'");
	zombie1->announce();
	delete zombie1;

	randomChump("svarochny apparat");
}
