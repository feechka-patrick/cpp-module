/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:22:39 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/16 18:54:40 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& fixed) : fixed_point(fixed.fixed_point)
{
	std::cout << "Copy constructor called\n";
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Assignation operator called\n";
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

int Fixed::operator<< (const Fixed& fixed)
{
	return (fixed.getRawBits());
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	fixed_point = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
