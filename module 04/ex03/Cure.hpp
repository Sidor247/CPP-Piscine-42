/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 01:54:12 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/28 01:54:42 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure( void );
	Cure( Cure const &src );
	Cure	&operator=( Cure const &rhs );
	~Cure( void );

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif