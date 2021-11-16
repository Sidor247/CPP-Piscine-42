/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:19:17 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/16 10:36:28 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

int	main()
{
	std::vector<int>	v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	std::list<int>	l;
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);

	std::deque<int>	d;
	d.push_back(1);
	d.push_back(2);
	d.push_back(3);

	try
	{
		std::cout << *easyfind(v, 1) << std::endl;
		std::cout << *easyfind(v, 4) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << *easyfind(l, 2) << std::endl;
		std::cout << *easyfind(l, 4) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << *easyfind(d, 3) << std::endl;
		std::cout << *easyfind(d, 4) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}