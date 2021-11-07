/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:47:19 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/04 20:00:52 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define FIXED_HPP

class	Fixed
{

public:
	Fixed( void );
	Fixed( Fixed const &src );
	~Fixed( void );

	Fixed	&operator=( Fixed const &rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int					_value;
	static const int	_nofb;

};

#endif