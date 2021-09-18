/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:22:39 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/18 12:42:13 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include <cmath>

Fixed::Fixed() : fixed_point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int _fixed) : fixed_point((1 << numFractionalBits) * _fixed)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(float _fixed) : fixed_point(roundf((1 << numFractionalBits) * _fixed))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& fixed) : fixed_point(fixed.fixed_point)
{
	std::cout << "Copy constructor called\n";
}

float Fixed::toFloat( void ) const
{
	return ((float)fixed_point / (1 << numFractionalBits));
}

int Fixed::toInt( void ) const
{
	return (static_cast<int>(fixed_point / (1 << numFractionalBits)));
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Assignation operator called\n";
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
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
