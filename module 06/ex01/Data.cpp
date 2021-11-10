/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:57:26 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/09 22:48:15 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(std::string const &s, int value): s(s), value(value) {}

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* 		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}