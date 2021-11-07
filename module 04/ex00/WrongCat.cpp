#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat const &src ): WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "[wrong meow]" << std::endl;
}
