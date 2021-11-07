/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:39:36 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/05 23:39:38 by cwhis            ###   ########.fr       */
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

	bool	operator>( Fixed const &rhs ) const;
	bool	operator<( Fixed const &rhs ) const;
	bool	operator>=( Fixed const &rhs ) const;
	bool	operator<=( Fixed const &rhs ) const;
	bool	operator==( Fixed const &rhs ) const;
	bool	operator!=( Fixed const &rhs ) const;

	Fixed	operator+( Fixed const &rhs ) const;
	Fixed	operator-( Fixed const &rhs ) const;
	Fixed	operator*( Fixed const &rhs ) const;
	Fixed	operator/( Fixed const &rhs ) const;

	Fixed	&operator++( void );
	Fixed	&operator--( void );
	Fixed	operator++( int const null );
	Fixed	operator--( int const null );

	static Fixed		&min(Fixed &lhs, Fixed &rhs);
	static Fixed const	&min(Fixed const &lhs, Fixed const &rhs);
	static Fixed		&max(Fixed &lhs, Fixed &rhs);
	static Fixed const	&max(Fixed const &lhs, Fixed const &rhs);

private:
	int					_value;
	static int const	_nofb;

};

std::ostream	&operator<<( std::ostream &lhs, Fixed const &rhs );

#endif