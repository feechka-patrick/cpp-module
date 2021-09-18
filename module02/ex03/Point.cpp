/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:54:20 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/18 13:55:47 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point(): x(0), y(0) {}

Point::Point(const Point& _point): x(_point.x), y(_point.y) {}

Point::Point(const Fixed _x, const Fixed _y) : x(_x), y(_y) {}

Point& Point::operator= (const Point& obj)
{
	return (*this);
}

const Fixed Point::getX() const
{
	return (this->x);
}

const Fixed Point::getY() const
{
	return (this->y);
}