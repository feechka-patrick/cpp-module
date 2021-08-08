/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:31:14 by nmisfit           #+#    #+#             */
/*   Updated: 2021/08/04 19:47:43 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->status = EMPTY;
}

Contact::~Contact(){}

void Contact::fill_contact()
{
	std::cout << "Enter first name: ";
	std::cin >> this->firstname;
	std::cout << "Enter last name: ";
	std::cin >> this->lastname;
	std::cout << "Enter nickname: ";
	std::cin >> this->nickname;
	std::cout << "Enter phone number: ";
	std::cin >> this->phone_number;
	std::cout << "Enter darkest secret: ";
	std::cin >> this->darkest_secret;
	this->status = NOT_EMPTY;
}
