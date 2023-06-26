/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 04:53:37 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/26 14:08:57 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __POINT_HPP__
#define __POINT_HPP__

#include "Fixed.hpp"

class Point	{
	
	public:

		Point(void);
		Point(const float x, const float y);
		Point(const Point & src);
		~Point(void);

		float	getX(void) const;
		float	getY(void) const;

		void	setX(float x);
		void	setY(float y);

		Point operator=(Point const & rhs);

	private:
	
		const Fixed	_x;
		const Fixed _y;
			
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif