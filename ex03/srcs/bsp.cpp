/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 04:55:18 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/26 13:47:46 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	isIn(Point a, Point b, Point point)	{
	return ((b.getX() - point.getX()) * (a.getY() - point.getY()) - (b.getY() - point.getY()) * (a.getX() - point.getX()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)	{
	if (((isIn(a, b, point) > 0) && (isIn(b, c, point) > 0) && (isIn(c, a, point) > 0)) || ((isIn(a, b, point) < 0) && (isIn(b, c, point) < 0) && (isIn(c, a, point) < 0)))
		return true;
	else
		return false;

	return false;
}