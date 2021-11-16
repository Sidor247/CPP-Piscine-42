/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:54:28 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/15 18:43:39 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack(): std::stack<T, Container>() {}

	MutantStack(MutantStack const &src): std::stack<T, Container>(src) {}

	MutantStack	&operator=(MutantStack const &rhs)
	{
		if (&rhs == this)
			return (*this);
		std::stack<T, Container>::operator=(rhs);
		return (*this);
	}

	virtual ~MutantStack() {}

	iterator	begin()
	{
		return (this->c.begin());
	}

	iterator	end()
	{
		return (this->c.end());
	}

	const_iterator	cbegin()
	{
		return (this->c.cbegin());
	}

	const_iterator	cend()
	{
		return (this->c.cend());
	}

	reverse_iterator	rbegin()
	{
		return (this->c.rbegin());
	}

	reverse_iterator	rend()
	{
		return (this->c.rend());
	}

	const_reverse_iterator	crbegin()
	{
		return (this->c.crbegin());
	}

	const_reverse_iterator	crend()
	{
		return (this->c.crend());
	}
};

#endif