/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 20:03:10 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/05 17:28:31 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{

public:
	Fixed( void );
	Fixed( Fixed const &src );
	Fixed( int const value );
	Fixed( float const value );
	~Fixed( void );

	Fixed	&operator=( Fixed const &rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int 	toInt( void ) const;

private:
	int					_value;
	static int const	_nofb;

};

std::ostream	&operator<<( std::ostream &lhs, Fixed const &rhs );

#endif