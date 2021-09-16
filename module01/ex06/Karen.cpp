/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:02:10 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/16 15:21:02 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]\nI love to get extra bacon for "
			<< "my 7XL-double-cheese-triple-pickle-special-ketchup"
			<< " burger. I just love it!\n";
}
void Karen::info( void )
{
	std::cout << "[ INFO ]\nI cannot believe adding extra "
			<< "bacon cost more money. You don’t put enough!"
			<< " If you did I would not have to ask for it!\n";
}
void Karen::warning( void )
{
	std::cout <<  "[ WARNING ]\nI think I deserve to have some"
			<< " extra bacon for free.\nI’ve been "
			<< "coming here for years and you just started working here last month.\n";
}
void Karen::error( void )
{
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n";
}
void Karen::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	//void (*arr[])() = {(void*)debug };
	
	int i = -1;
	while (i < 4 && levels[++i] != level) {};
	switch (i)
	{
		case 0:
			debug();
			info();
			warning();
			error();
			break;
		case 1:
			info();
			warning();
			error();
			break;
		case 2:
			warning();
			error();
			break;
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break;
	}
}