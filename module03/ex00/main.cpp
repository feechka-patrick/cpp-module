/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:39:58 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/18 17:46:27 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
	ClapTrap mytrap("nametrap");

	mytrap.attack("sm other");
	mytrap.takeDamage(10);
	mytrap.beRepaired(7);
}