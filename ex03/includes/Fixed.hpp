/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:40:15 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/26 04:39:59 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>
#include <math.h>


class Fixed	{

	public:
		
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(int const raw);
		Fixed(float const raw);
		~Fixed(void);

		int		getRawBits(void) const;

		void	setRawBits(int const raw);
		
		float	toFloat(void) const;
		int		toInt(void)	const;
		static Fixed & min(Fixed & n1, Fixed & n2);
		static const Fixed & min(Fixed const & n1, Fixed const & n2);
		static Fixed & max(Fixed & n1, Fixed & n2);
		static const Fixed & max(Fixed const & n1, Fixed const & n2);


		Fixed &	operator=(Fixed const & rhs);
		Fixed &	operator+(Fixed const & rhs);
		Fixed &	operator-(Fixed const & rhs);
		Fixed 	operator*(Fixed const & rhs);
		Fixed 	operator/(Fixed const & rhs);

		Fixed &	operator++(void);
		Fixed &	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
		
		int	operator<(Fixed const & rhs) const;
		int	operator>(Fixed const & rhs) const;
		int	operator<=(Fixed const & rhs) const;
		int	operator>=(Fixed const & rhs) const;
		int	operator==(Fixed const & rhs) const;
		int	operator!=(Fixed const & rhs) const;

	private:

		int					_rawBits;
		static const int	_bits = 8;
		
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif