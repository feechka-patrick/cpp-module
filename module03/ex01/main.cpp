/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:39:58 by nmisfit           #+#    #+#             */
/*   Updated: 2021/10/22 16:08:36 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int main()
{
	ScavTrap trapp("BADBOY");
	std::cout << std::endl;
	
	trapp.getInfo();
	std::cout << std::endl;
	
	trapp.attack("BORIS");
	std::cout << std::endl;
	
	trapp.guardGate();
	std::cout << std::endl;
}