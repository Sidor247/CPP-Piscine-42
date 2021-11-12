/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwhis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:48:03 by cwhis             #+#    #+#             */
/*   Updated: 2021/11/12 11:32:00 by cwhis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array
{
public:
	Array<T>(): _arr(new T[0]), _size(0) {}

	Array<T>(unsigned int size): _arr(new T[size]), _size(size) {}

	Array<T>(Array const &src): _arr(new T[src._size]), _size(src._size)
	{
		for (unsigned int i = 0; i < _size; ++i)
			_arr[i] = src._arr[i];
	}

	Array	&operator=(Array const &rhs)
	{
		if (this == &rhs)
			return (*this);
		delete [] _arr;
		_size = rhs._size;
		_arr = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_arr[i] = rhs._arr[i];
		return (*this);
	}

	~Array()
	{
		delete [] _arr;
	}

	unsigned int	size(void) const
	{
		return (_size);
	}

	class OutOfBoundsException : public std::exception
	{
	public:
		virtual const char *what( void ) const throw()
		{
			return "index is out of bounds";
		}
	};

	T	&operator[](unsigned int i) const throw(OutOfBoundsException)
	{
		if (i >= _size)
			throw OutOfBoundsException();
		return (_arr[i]);
	}

private:
	T				*_arr;
	unsigned int	_size;
};

#endif