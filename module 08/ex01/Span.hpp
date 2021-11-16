/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:24:55 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/14 20:31:38 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
public:
	Span();
	Span(unsigned int n);
	Span(Span const &src);
	Span	&operator=(Span const &rhs);
	~Span();

	class ElementsLimitException : public std::exception
	{
		virtual char const	*what() const throw();
	};

	class NotEnoughElementsException : public std::exception
	{
		virtual char const	*what() const throw();
	};

	void	addNumber(int value) throw(ElementsLimitException);
	
	template<typename RandomAccessIterator>
	void	addNumber(RandomAccessIterator begin, RandomAccessIterator end)
	throw(ElementsLimitException)
	{
		if (static_cast<unsigned int>(end - begin) > _n - _v.size())
			throw ElementsLimitException();
		std::copy(begin, end, std::back_inserter(_v));
	}

	unsigned int	shortestSpan() throw(NotEnoughElementsException);
	unsigned int	longestSpan() throw(NotEnoughElementsException);

private:
	std::vector<int>	_v;
	unsigned int		_n;
};

#endif