/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 02:25:25 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/12 23:05:46 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template<typename T>
void	print(T const &lhs)
{
	std::cout << lhs;
}

template<typename T>
void	inc(T &lhs)
{
	++lhs;
}

template<typename T>
void	dec(T &lhs)
{
	--lhs;
}

int	main(void)
{
	char	char_arr[] = "abcdefg";
	int		int_arr[] = {1, 2, 3, 4};

	iter(char_arr, 7, &inc);
	iter(char_arr, 7, &print);
	std::cout << std::endl;
	iter(int_arr, 4, &dec);
	iter(int_arr, 4, &print);
	std::cout << std::endl;
}