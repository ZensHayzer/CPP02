/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:42:01 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/26 04:40:03 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void): _rawBits(0)	{

	return;
}

Fixed::Fixed(Fixed const &src)	{
	(*this) = src;

	return;
}

Fixed::Fixed(int const raw)	{
	_rawBits = raw << _bits;
	
	return;
}

Fixed::Fixed(float const raw)	{
	_rawBits = roundf(raw * (1 << _bits));
	
	return;
}

Fixed::~Fixed(void)	{
	
	return;
}

Fixed & Fixed::operator=(Fixed const & rhs)	{
	this->_rawBits = rhs.getRawBits();
	
	return *this;
}

Fixed & Fixed::operator+(Fixed const & rhs)	{
	this->_rawBits = _rawBits + rhs.getRawBits();
	
	return *this;
}

Fixed & Fixed::operator-(Fixed const & rhs)	{
	this->_rawBits = _rawBits - rhs.getRawBits();
	
	return *this;
}

Fixed  Fixed::operator*(Fixed const & rhs)	{
	
	return (toFloat() * rhs.toFloat());
}

Fixed  Fixed::operator/(Fixed const & rhs)	{
	
	return (toFloat() / rhs.toFloat());
}

Fixed & Fixed::operator++(void)	{	
	_rawBits++;

	return *this;
}

Fixed & Fixed::operator--(void)	{
	_rawBits--;

	return *this;
}

Fixed Fixed::operator++(int)	{	
	Fixed	tmp = *this;

	++(*this);
	
	return (tmp);
}

Fixed Fixed::operator--(int)	{
	Fixed	tmp = *this;

	--(*this);
	
	return (tmp);
}

int	Fixed::operator<(Fixed const & rhs) const	{
	if (this->getRawBits() < rhs.getRawBits())
		return true;
	
	return false;
}

int Fixed::operator>(Fixed const & rhs) const	{
	if (this->getRawBits() > rhs.getRawBits())
		return true;
	
	return false;
}

int	Fixed::operator<=(const Fixed & rhs) const	{
	if (this->toFloat() <= rhs.toFloat())
		return true;
	
	return false;
}

int Fixed::operator>=(Fixed const & rhs) const	{
	if (this->getRawBits() >= rhs.getRawBits())
		return true;
	
	return false;
}

int Fixed::operator==(Fixed const & rhs) const	{
	if (this->getRawBits() == rhs.getRawBits())
		return true;
	
	return false;
}

int Fixed::operator!=(Fixed const & rhs) const	{
	if (this->getRawBits() != rhs.getRawBits())
		return true;
	
	return false;
}

int	Fixed::getRawBits(void) const	{
	
	return _rawBits;
}

void	Fixed::setRawBits(int const raw)	{
	_rawBits = raw;

	return;
}

float	Fixed::toFloat(void) const	{

	return (float)_rawBits / (float)(1 << _bits);
}

int	Fixed::toInt(void) const	{

	return _rawBits >> _bits;
}

Fixed & Fixed::min(Fixed & n1, Fixed & n2)	{
	if (n1 < n2)
		return n1;

	return n2;	
}

const Fixed & Fixed::min(Fixed const & n1, Fixed const & n2)	{
	if (n1 < n2)
		return n1;

	return n2;	
}

Fixed & Fixed::max(Fixed & n1, Fixed & n2)	{
	if (n1 > n2)
		return n1;

	return n2;	
}

const Fixed & Fixed::max(Fixed const & n1, Fixed const & n2)	{
	if (n1 > n2)
		return n1;

	return n2;	
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)	{
	o << rhs.toFloat();
	
	return o;
}