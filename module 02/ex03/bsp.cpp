/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 00:04:18 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/13 00:31:41 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	half_plane_postion( Point const a, Point const b, Point const point )
{
	return ((point.getX() - a.getX()) * (b.getY() - a.getY())
		-	(point.getY() - a.getY()) * (b.getX() - a.getX()));
}

bool is_same_half_plane( Point const a, Point const b, Point const c, Point const point )
{
	Fixed	d1 = half_plane_postion(a, b, c);
	Fixed	d2 = half_plane_postion(a, b, point);

	return (d1 * d2 > 0);
}

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
	return (is_same_half_plane(a, b, c, point)
		&&	is_same_half_plane(b, c, a, point)
		&&	is_same_half_plane(a, c, b, point));
}
