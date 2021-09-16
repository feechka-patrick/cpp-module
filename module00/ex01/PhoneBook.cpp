/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:35:25 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/13 18:50:24 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){this->index = 0;}

void	PhoneBook::add(void)
{
	contacts[index].fill_contact();
	index = (index + 1) % MAX_SIZE;
}

std::string to_format(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	return (str);
}

void	PhoneBook::search(void)
{
	std::cout << std::setw(10) << std::right << "INDEX" 
				<< "|" << std::setw(10) << "FIRST NAME"
				<< "|" << std::setw(10) << "LAST NAME"
				<< "|" << std::setw(10) << "NICKNAME"
				<< "|" << std::endl;
	for(int i = 0; i < MAX_SIZE; i++)
	{
		if (contacts[i].getStatus() == NOT_EMPTY)
		{
			std::cout << std::setw(10) << std::right << i + 1
					<< "|" << std::setw(10) << to_format(contacts[i].getFirstName())
					<< "|" << std::setw(10) << to_format(contacts[i].getLastName())
					<< "|" << std::setw(10) << to_format(contacts[i].getNickname())
					<< "|" << std::endl;
		}
	}
}

