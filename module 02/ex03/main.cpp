/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 23:39:43 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/13 00:33:34 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point	a(-10.0f, 0.0f);
	Point	b(15.0f, 0.0f);
	Point	c(0.0f, -10.0f);
	Point	p1(0.0f, 0.0f);
	Point	p2(0.0f, -10.0f);
	Point	p3(100, 100);
	Point	p4(-1.0f, -1.0f);

	std::cout << bsp(a, b, c, p1) << std::endl;
	std::cout << bsp(a, b, c, p2) << std::endl;
	std::cout << bsp(a, b, c, p3) << std::endl;
	std::cout << bsp(a, b, c, p4) << std::endl;
	return 0;
}
