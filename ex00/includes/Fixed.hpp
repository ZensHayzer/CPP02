/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:40:15 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/26 01:50:26 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __FIXED_HPP__
#define __FIXED_HPP__

#include <iostream>

class Fixed	{

	public:
		
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);

		int		getRawBits(void) const;

		void	setRawBits(int const raw);
		
		Fixed &	operator=(Fixed const & rhs);

	private:

		int					_rawBits;
		static const int	_bits = 8;
		
};

#endif