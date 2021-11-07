/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:09:08 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/28 01:32:56 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice( void );
	Ice( Ice const &src );
	Ice	&operator=( Ice const &rhs );
	~Ice( void );

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif