/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:57:31 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/09 22:48:08 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <cstdint>

struct Data
{
	Data(std::string const &s, int value);

	std::string	s;
	int			value;
};

uintptr_t	serialize(Data* ptr);
Data* 		deserialize(uintptr_t raw);

#endif