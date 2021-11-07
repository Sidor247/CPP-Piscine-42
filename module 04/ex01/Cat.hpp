/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 00:27:17 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/25 12:32:18 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat( void );
	Cat( Cat const &src );
	Cat	&operator=(Cat const &rhs);
	~Cat( void );

	void	makeSound( void ) const;

private:
	Brain	*_brain;
};

#endif
