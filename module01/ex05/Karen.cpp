/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:02:10 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/16 17:00:01 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "[DEBUG] I love to get extra bacon for "
			<< "my 7XL-double-cheese-triple-pickle-special-ketchup"
			<< " burger. I just love it!\n";
}
void Karen::info( void )
{
	std::cout << "[INFO] I cannot believe adding extra "
			<< "bacon cost more money. You don’t put enough!"
			<< " If you did I would not have to ask for it!\n";
}
void Karen::warning( void )
{
	std::cout <<  "[WARNING] I think I deserve to have some"
			<< " extra bacon for free. I’ve been "
			<< "coming here for years and you just started working here last month.\n";
}

void Karen::error( void )
{
	std::cout << "[ERROR] This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::* arr[])() = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
	
	int i = -1;
	while (levels[++i] != level);
	(this->*arr[i])();
}
