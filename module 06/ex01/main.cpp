/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:38:25 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/09 22:52:46 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main()
{
	Data		*data_ptr = new Data("data_string", 12341234);
	uintptr_t	ptr = serialize(data_ptr);
	Data		*new_data_ptr = deserialize(ptr);
	std::cout << data_ptr << std::endl;
	std::cout << new_data_ptr << std::endl;
	std::cout << new_data_ptr->s << std::endl;
	std::cout << new_data_ptr->value << std::endl;
}