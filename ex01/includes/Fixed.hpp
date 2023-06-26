/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:40:15 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/26 02:34:29 by ajeanne          ###   ########.fr       */
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

		Fixed &	operator=(Fixed const & rhs);

	private:

		int					_rawBits;
		static const int	_bits = 8;
		
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif