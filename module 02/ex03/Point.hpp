/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:41:09 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/10 14:13:09 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point
{

public:
	Point( void );
	Point( Point const &src );
	Point( float const x, float const y );
	~Point( void );

	Point	&operator=( Point const &rhs );

	Fixed	getX( void ) const;
	Fixed	getY( void ) const;

private:
	Fixed const	x;
	Fixed const	y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif