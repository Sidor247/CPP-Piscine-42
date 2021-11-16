/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:25:50 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/14 20:26:19 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _v(), _n(0) {}

Span::Span(unsigned int n): _v(), _n(n)
{
	_v.reserve(n);
}

Span::Span(Span const &src): _v(src._v), _n(src._n) {}

Span	&Span::operator=(Span const &rhs)
{
	if (&rhs == this)
		return (*this);
	_v = rhs._v;
	_n = rhs._n;
	return (*this);
}

Span::~Span() {}

char const	*Span::ElementsLimitException::what() const throw()
{
	return "Attempting to add a new number if there are already N";
}

char const	*Span::NotEnoughElementsException::what() const throw()
{
	return "Not enough elements to find span";
}

void	Span::addNumber(int value) throw(ElementsLimitException)
{
	if (_v.size() == _n)
		throw ElementsLimitException();
	_v.push_back(value);
}

unsigned int	Span::shortestSpan() throw(NotEnoughElementsException)
{
	if (_v.size() < 2)
		throw NotEnoughElementsException();
	std::vector<int>	copy(_v);
	std::sort(copy.begin(), copy.end());
	unsigned int diff = abs(static_cast<long>(copy[0]) - static_cast<long>(copy[1]));
	for (unsigned int i = 1; i < copy.size() - 1; ++i)
		if (abs(static_cast<long>(copy[i]) - static_cast<long>(copy[i + 1])) < diff)
			diff = abs(static_cast<long>(copy[i]) - static_cast<long>(copy[i + 1]));
	return (diff);
}

unsigned int	Span::longestSpan() throw(NotEnoughElementsException)
{
	if (_v.size() < 2)
		throw NotEnoughElementsException();
	int max = *std::max_element(_v.begin(), _v.end());
	int min = *std::min_element(_v.begin(), _v.end());
	return (static_cast<long>(max) - static_cast<long>(min));
}