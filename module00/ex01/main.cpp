/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:49:49 by nmisfit           #+#    #+#             */
/*   Updated: 2021/08/04 19:49:53 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	std::cout << "--PHONEBOOK--";
	std::string command;
	std::cout << "\n--> ";
	std::cin >> command;

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
		std::cin >> command;
	}
	return (0);
}