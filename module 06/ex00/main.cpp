/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:41:08 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/10 12:39:52 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convertible.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	try
	{
		Convertible	c(argv[1]);
		c.printAll();
	}
	catch(...)
	{
		std::cerr << "Can't convert given literal" << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}