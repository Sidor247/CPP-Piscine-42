/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 23:11:08 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/09 23:37:05 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

Base *generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	default:
		return nullptr;
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "unrelated type" << std::endl;
}

void identify(Base& p)
{
	try
	{
		Base& ref = dynamic_cast<A&>(p);
		(void)ref;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &e)
	{
		try
		{
			Base& ref = dynamic_cast<B&>(p);
			(void)ref;
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast &e)
		{
			try
			{
				Base& ref = dynamic_cast<C&>(p);
				(void)ref;
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast &e)
			{
				std::cout << "unrelated type" << std::endl;
			}
		}
	}
}