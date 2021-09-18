/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:22:39 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/18 12:43:54 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include <cmath>

Fixed::Fixed() : fixed_point(0)
{
	//std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int _fixed) : fixed_point((1 << numFractionalBits) * _fixed)
{
	//std::cout << "Int constructor called\n";
}

Fixed::Fixed(float _fixed) : fixed_point(roundf((1 << numFractionalBits) * _fixed))
{
	//std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& fixed) : fixed_point(fixed.fixed_point)
{
	//std::cout << "Copy constructor called\n";
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
	//std::cout << "Assignation operator called\n";
	this->setRawBits(fixed.getRawBits());
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}

bool Fixed::operator< (const Fixed& rhs)
{ 
	return (this->getRawBits() < rhs.getRawBits());
}
bool Fixed::operator> (const Fixed& rhs)
{
	return (rhs.getRawBits() < this->getRawBits());
}
bool Fixed::operator<=(const Fixed& rhs)
{
	return !(this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed& rhs)
{
	return !(this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator==(const Fixed& rhs)
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed& rhs)
{
	return !(this->getRawBits() == rhs.getRawBits());
}

float Fixed::operator+(const Fixed& obj)
{
	return (this->toFloat() + obj.toFloat());
}

float Fixed::operator-(const Fixed& obj)
{
	return (this->toFloat() - obj.toFloat());
}

float Fixed::operator*(const Fixed& obj)
{
	return (this->toFloat() * obj.toFloat());
}

float Fixed::operator/(const Fixed& obj)
{
	return (this->toFloat() / obj.toFloat());
}

Fixed& Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed old = *this;
	operator++();
	return old;
}

Fixed& Fixed::operator--()
{
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed old = *this;
	operator--();
	return old;
}

Fixed& Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}

const Fixed& Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.getRawBits() < obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}

Fixed& Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}

const Fixed& Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1.getRawBits() > obj2.getRawBits())
		return (obj1);
	else
		return (obj2);
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called\n";
	return (fixed_point);
}

void Fixed::setRawBits( int const raw )
{
	fixed_point = raw;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called\n";
}
