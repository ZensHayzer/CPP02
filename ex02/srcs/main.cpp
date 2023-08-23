/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeanne <ajeanne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:39:32 by ajeanne           #+#    #+#             */
/*   Updated: 2023/08/23 11:24:51 by ajeanne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {

	std::cout << "// Subject Tests \\\\" << std::endl;
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "\n// End Subject Tests \\\\\n" << std::endl;

	if (a < b)
		std::cout << "a < b" << std::endl;
	else
		std::cout << "a >= b" << std::endl;
	if (a <= b)
		std::cout << "a <= b" << std::endl;
	else
		std::cout << "a > b" << std::endl;
	if (a >= b)
		std::cout << "a >= b" << std::endl;
	else
		std::cout << "a < b" << std::endl;
	if (a > b)
		std::cout << "a > b" << std::endl;
	else
		std::cout << "a <= b" << std::endl;
	if (a == b)
		std::cout << "a == b" << std::endl;
	else
		std::cout << "a != b" << std::endl;
	if (a != b)
		std::cout << "a != b" << std::endl;
	else
		std::cout << "a == b" << std::endl;

	std::cout<< "\nWith the + " << a + b<<std::endl;
	std::cout<< "With the - " << a - b<<std::endl;
	std::cout<< "With the * " << a * b<<std::endl;
	std::cout<< "With the / " << a / b<<std::endl;

	std::cout << "\nValue a " << a.toFloat() << std::endl;
	std::cout << "Value a ++a " << ++a << std::endl;
	std::cout << "Value a after ++a " << a << std::endl;
	std::cout << "Value a a++ " << a++ << std::endl;
	std::cout << "Value a after a++ " << a << std::endl;
	std::cout << "Value a --a " << --a << std::endl;
	std::cout << "Value a after --a " << a << std::endl;
	std::cout << "Value a a-- " << a-- << std::endl;
	std::cout << "Value a after a-- " << a << std::endl;
	std::cout << "Value b " << b << std::endl;
	
	std::cout << "\nMin " << Fixed::min( a, b ) << std::endl;
	std::cout << "Max " << Fixed::max( a, b ) << std::endl;
	
	return 0;
}