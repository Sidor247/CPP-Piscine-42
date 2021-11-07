/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:23:41 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/25 12:37:56 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	Brain( void );
	Brain( Brain const &src );
	Brain	&operator=( Brain const &rhs );
	~Brain( void );
private:
	std::string	_ideas[100];
};

#endif
