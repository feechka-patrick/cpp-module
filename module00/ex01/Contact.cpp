/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 19:31:14 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/13 18:52:07 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->status = EMPTY;
}

Contact::~Contact(){}

int Contact::getStatus()
{
	return (this->status);
}

std::string Contact::getFirstName()
{
	return (this->firstname);
}

std::string Contact::getLastName()
{
	return (this->lastname);
}

std::string Contact::getNickname()
{
	return (this->nickname);
}

void Contact::fill_contact()
{
	std::cout << "Enter first name: ";
	getline(std::cin, this->firstname);
	std::cout << "Enter last name: ";
	getline(std::cin, this->lastname);
	std::cout << "Enter nickname: ";
	getline(std::cin, this->nickname);
	std::cout << "Enter phone number: ";
	getline(std::cin, this->phone_number);
	std::cout << "Enter darkest secret: ";
	getline(std::cin, this->darkest_secret);
	this->status = NOT_EMPTY;
}
