/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:47:25 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/18 15:02:34 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point();
		Point(const Point& _point);
		Point(const Fixed _x, const Fixed _y);

		Point& operator= (const Point& fixed);

		const Fixed getX() const;
		const Fixed getY() const;
		
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
