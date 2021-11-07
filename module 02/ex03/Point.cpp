/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:48:20 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/10 14:13:50 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ): x(), y() {}

Point::Point( Point const &src ): x(src.x), y(src.y) {}

Point::Point( float const x, float const y ): x(x), y(y) {}

Point::~Point( void ) {}

Point	&Point::operator=( Point const &rhs )
{
	Point	tmp(rhs);

	*this = tmp;
	return (*this);
}

Fixed	Point::getX( void ) const
{
	return (this->x);
}

Fixed	Point::getY( void ) const
{
	return (this->y);
}