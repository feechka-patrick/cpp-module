/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:49:49 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/13 18:28:58 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::cout << "--PHONEBOOK--";
	std::string command;
	std::cout << "\n--> ";
	getline(std::cin, command);

	PhoneBook phonebook;
	while (command != "EXIT")
	{
		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else
			std::cout << "COMMAND NOT FOUND. TRY AGAIN.";

		std::cout << "\n--> ";
		getline(std::cin, command);
		if (std::cin.eof() != 0)
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}