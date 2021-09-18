/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmisfit <nmisfit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 13:04:23 by nmisfit           #+#    #+#             */
/*   Updated: 2021/09/18 15:08:00 by nmisfit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float abp = (b.getX() - a.getX()) * (point.getY() - a.getY()) 
			- (b.getY() - a.getY()) * (point.getX() - a.getX());
	float bcp = (c.getX() - b.getX()) * (point.getY() - b.getY())
			- (c.getY() - b.getY()) * (point.getX() - b.getX());
	float cap = (a.getX() - c.getX()) * (point.getY() - c.getY())
			- (a.getY() - c.getY()) * (point.getX() - c.getX());

	//std::cout << abp << " " << bcp << " " << cap << std::endl;
	
	if ((abp > 0 && bcp > 0 && cap > 0) || (abp < 0 && bcp < 0 && cap < 0))
		return (true);
	else return (false);
}
