/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:42:01 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/26 02:41:39 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _rawBits(0)	{
	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed(Fixed const &src)	{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = src;

	return;
}

Fixed::~Fixed(void)	{
	std::cout << "Destructor called" << std::endl;
	
	return;
}

Fixed & Fixed::operator=(Fixed const & rhs)	{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_rawBits = rhs.getRawBits();
	
	return *this;
}

int	Fixed::getRawBits(void) const	{
	std::cout << "getRawBits member function called" << std::endl;
	
	return _rawBits;
}

void	Fixed::setRawBits(int const raw)	{
	_rawBits = raw;

	return;
}