/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 04:54:55 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/26 05:34:31 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void): _x(0), _y(0)	{
	
}

Point::Point(const float x, const float y): _x(x), _y(y)	{
	
}

Point::Point(const Point & src): _x(src._x), _y(src._y)	{
	
}

Point::~Point(void)	{
	
}

Point	& Point::operator=(Point const & rhs)	{
	Point	newPoint(rhs._x.toFloat(), rhs._y.toFloat());
	
	this->~Point();

	return newPoint;
}
