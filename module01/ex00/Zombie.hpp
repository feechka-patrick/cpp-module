/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:13:12 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/07 17:35:05 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "iostream"

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		
		void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif