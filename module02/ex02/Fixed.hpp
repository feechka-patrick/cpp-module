/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:22:41 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/17 20:57:00 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int fixed_point;
		static const int numFractionalBits = 8;
	public:
		Fixed();
		Fixed(int _fixed);
		Fixed(float _fixed);
		Fixed(const Fixed& fixed);
		
		float toFloat( void ) const;
		int toInt( void ) const;
		
		Fixed& operator= (const Fixed& fixed);

		bool operator< (const Fixed& rhs);
		bool operator> (const Fixed& rhs);
		bool operator<=(const Fixed& rhs);
		bool operator>=(const Fixed& rhs);
		bool operator==(const Fixed& rhs);
		bool operator!=(const Fixed& rhs);

		float operator+(const Fixed& obj);
		float operator-(const Fixed& obj);
		float operator*(const Fixed& obj);
		float operator/(const Fixed& obj);
		
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		static Fixed& min(Fixed& obj1, Fixed& obj2);
		static const Fixed& min(const Fixed& obj1, const Fixed& obj2);
		static Fixed& max(Fixed& obj1, Fixed& obj2);
		static const Fixed& max(const Fixed& obj1, const Fixed& obj2);
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif