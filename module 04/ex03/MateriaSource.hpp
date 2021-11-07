/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 01:04:42 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/28 01:34:58 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource( void );
	MateriaSource( MateriaSource const &src );
	MateriaSource	&operator=( MateriaSource const &rhs );
	~MateriaSource( void );

	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
private:
	AMateria	*_storage[4];
	int			_size;
};

#endif
