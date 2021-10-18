/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:39:58 by nmisfit           #+#    #+#             */
/*   Updated: 2021/10/15 16:14:16 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

int main()
{
	FragTrap frag("FRAGNAME");
	std::cout << std::endl;
	
	frag.getInfo();
	std::cout << std::endl;
	
	frag.highFivesGuys();
	std::cout << std::endl;
}