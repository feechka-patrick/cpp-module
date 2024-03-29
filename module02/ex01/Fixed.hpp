/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:22:41 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/17 21:17:59 by nmisfit          ###   ########.fr       */
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

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		~Fixed();
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif