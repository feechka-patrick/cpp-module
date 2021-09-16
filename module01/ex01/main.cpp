/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:36:55 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/15 19:11:22 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombies;
	zombies = zombieHorde(100, "Luke");
	zombieHorde(100, "Luke");
	delete[] zombies;
}
