/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:22:41 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/16 18:36:04 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int fixed_point;
		static const int lit = 8;
	public:
		Fixed();
		Fixed(const Fixed& fixed);
		
		Fixed& operator= (const Fixed& fixed);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		~Fixed();
};

#endif