/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:39:58 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/24 16:31:12 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int main()
{
	ScavTrap trapp("badboy");
	std::cout << std::endl;
	
	trapp.getInfo();
	std::cout << std::endl;
	
	trapp.guardGate();
	std::cout << std::endl;
}