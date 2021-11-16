/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:04:43 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/15 18:42:29 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

class	NotFoundException : public std::exception
{
	virtual char const	*what() const throw()
	{
		return "Can't find number in container";
	}
};

template<typename T>
typename T::const_iterator easyfind(T const &container, int n) throw(NotFoundException)
{
	typename T::const_iterator iter;
	iter = std::find(container.cbegin(), container.cend(), n);
	if (iter != container.end())
		return (iter);
	throw NotFoundException();
}

#endif