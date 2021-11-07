/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 23:58:36 by cwhis             #+#    #+#             */
/*   Updated: 2021/10/26 19:01:02 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal	*arr[10];
	int		i = 0;

	for ( ; i < 5; ++i )
	{
		arr[i] = new Dog();
		std::cout << std::endl;
	}
	for ( ; i < 10; ++i )
	{	
		arr[i] = new Cat();
		std::cout << std::endl;
	}
	
	Animal	*copy_arr[10];

	for ( i = 0; i < 5; ++i )
	{
		copy_arr[i] = new Dog(static_cast<Dog&>(*arr[i]));
		std::cout << std::endl;
	}
    for ( ; i < 10; ++i )
	{
        copy_arr[i] = new Cat(static_cast<Cat&>(*arr[i]));
		std::cout << std::endl;
	}
	
	for ( i = 0; i < 10; ++i )
	{
		delete arr[i];
		std::cout << std::endl;
		delete copy_arr[i];
		std::cout << std::endl;
	}

	return (0);
}