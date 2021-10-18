/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:48:48 by nmisfit           #+#    #+#             */
/*   Updated: 2021/10/18 19:18:37 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string _name);

		void guardGate();
		void getInfo();
		void attack(std::string const & target);
		
		~ScavTrap();
};

#endif