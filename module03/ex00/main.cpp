/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:39:58 by nmisfit           #+#    #+#             */
/*   Updated: 2021/10/15 15:50:36 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
	ClapTrap mytrap("NAMETRAP");
	
	std::cout << std::endl;
	mytrap.getInfo();
	std::cout << std::endl;
	
	mytrap.attack("SOMEONE");
	mytrap.takeDamage(10);
	mytrap.beRepaired(7);
}