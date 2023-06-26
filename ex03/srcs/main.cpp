/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:39:32 by ajeanne           #+#    #+#             */
/*   Updated: 2023/06/26 14:19:45 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) {
	Point	a(3, 0);
	Point	b(0, 3);
	Point	c(6, 3);
	Point	point(4, 2);
	
	std::cout << "/**********************************\\\n"
			  << "|  Welcome in Point in a Triangle  |\n"
			  << "\\**********************************/\n" << std::endl;
	std::cout << "a : " << a.getX() << "," << a.getY() << std::endl;
	std::cout << "b : " << b.getX() << "," << b.getY() << std::endl;
	std::cout << "c : " << c.getX() << "," << c.getY() << std::endl;
	std::cout << "point : " << point.getX() << "," << point.getY() << std::endl;
	if (bsp(a, b, c, point))
		std::cout << "\nis in" << std::endl;
	else
		std::cout << "\nis out" << std::endl;
	a.~Point();
	b.~Point();
	c.~Point();
	point.~Point();

	Point	d(3.4, 0.8);
	Point	e(0.6, 3.1);
	Point	f(6.1, 3.8);
	Point	point1(4.1, 8.2);
	
	std::cout << "\n/**************\\\n"
			  << "|  Triangle 2  |\n"
			  << "\\**************/\n" << std::endl;
	std::cout << "d : " << d.getX() << "," << d.getY() << std::endl;
	std::cout << "e : " << e.getX() << "," << e.getY() << std::endl;
	std::cout << "f : " << f.getX() << "," << f.getY() << std::endl;
	std::cout << "point1 : " << point1.getX() << "," << point1.getY() << std::endl;
	if (bsp(d, e, f, point1))
		std::cout << "\nis in" << std::endl;
	else
		std::cout << "\nis out" << std::endl;

	return 0;
}