/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:34:34 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/24 16:35:14 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string _name);

		void getInfo();
		
		~FragTrap();
};

#endif